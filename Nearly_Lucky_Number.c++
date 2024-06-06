#include <iostream>
#include <string>

using namespace std;

bool is_lucky_digit(char digit)
{
    return digit == '4' || digit == '7';
}

bool is_lucky_number(int number)
{
    string number_str = to_string(number);
    for (char digit : number_str)
    {
        if (!is_lucky_digit(digit))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string n;
    cin >> n;

    int lucky_digit_count = 0;
    for (char digit : n)
    {
        if (is_lucky_digit(digit))
        {
            lucky_digit_count++;
        }
    }

    if (is_lucky_number(lucky_digit_count))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
