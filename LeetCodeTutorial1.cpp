#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

void excercise1()
{
    bool is_valid = false;
    cout << "Enter a number";
    int num = 0;
    cin >> num;

    //if(num > 5000 & (num%300) == 0 && (num/10)%2==0 && num%10==0)
        //is_valid = true;

    is_valid = num > 5000;
    is_valid = is_valid && num / 100 % 10 == 3;
    is_valid = is_valid && num /10 % 2 == 0;
    is_valid = is_valid && num % 10 == 0;

    cout << endl << is_valid << endl;
}

void excercise2()
{
    int counter = 0;
    for(int entry = 0; entry < 10000; entry+=3)
    {
        if((entry%2 == 0 || entry%3 == 0) && entry%11==0 && counter<5)
        {
            cout << entry << endl;
            counter++;
        }
    }
}

void LeetCodeQ1()
{
    bool isMonotonic = true;
    vector<int> vector1;
    int before = 0;

    before = vector1[0];
    for(int index = 1; index < vector1.size() && isMonotonic = true; index++)
    {
        if(vector1[index] > before || vector1[index] < before)
        {
            vector1[index] = before;
        }
        isMonotomic = false;
    }

    cout << isMonotonic;

}

int main()
{
    //excercise1();
    //excercise2();
    LeetCodeQ1();
}