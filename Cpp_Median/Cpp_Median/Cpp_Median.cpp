#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Median
{
public:
    Median() {}

    double SortAndCalculate()
    {
        sort(nums.begin(), nums.end());

        if (nums.size() % 2 == 0)
        {
            double a = nums.at((nums.size() / 2) - 1);
            double b = nums.at(nums.size() / 2);

            return (double)((a + b) / 2);
        }
        else if (nums.size() % 2 == 1)
        {
            return (double)(nums.at((nums.size() / 2)));
        }
    }
    double CalculateMedian(int one, int two, int three, int four, int five)
    {
        nums.clear();

        nums.push_back(one);
        nums.push_back(two);
        nums.push_back(three);
        nums.push_back(four);
        nums.push_back(five);

        SortAndCalculate();
    }
    double CalculateMedian(int one, int two, int three, int four)
    {
        nums.clear();

        nums.push_back(one);
        nums.push_back(two);
        nums.push_back(three);
        nums.push_back(four);

        SortAndCalculate();
    }
    double CalculateMedian(int one, int two, int three)
    {
        nums.clear();

        nums.push_back(one);
        nums.push_back(two);
        nums.push_back(three);

        SortAndCalculate();
    }
    double CalculateMedian(int one, int two)
    {
        nums.clear();

        nums.push_back(one);
        nums.push_back(two);

        SortAndCalculate();
    }
private:
    vector<int> nums;
};


int main()
{
    Median m;
    cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
    cout << m.CalculateMedian(8, 6, 4, 2) << endl;
    cout << m.CalculateMedian(9, 3, 7) << endl;
    cout << m.CalculateMedian(5, 2) << endl;
    Median m2;
    cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
    cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
    cout << m2.CalculateMedian(0, 1, 0) << endl;
    cout << m2.CalculateMedian(5, 3) << endl;

    return 0;
}
