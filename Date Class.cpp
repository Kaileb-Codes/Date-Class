// Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int hour = 00;
    int minute = 00;
    int second = 00;

}



void SetTime(int& hour, int& minute, int& second)
{
    std::cout << "What hour is it in a 24 hour clock?" << std::endl;
    std::cin >> hour;

    std::cout << "What minute is it?" << std::endl;
    std::cin >> minute;

    std::cout << "How many seconds have gone by in the current minute?" << std::endl;
    std::cin >> second;
}

void TimeOfDay(int hour, int minute, int second, int ClockSet)
{
    if (ClockSet == 1){

        std::cout << hour << ":" << minute << ":" << second << std::endl;
    }else{

        if (hour < 12){

            std::cout << hour << ":" << minute << ":" << second << " AM" << std::endl;
        }else{
                hour = hour - 12;

            std::cout << hour << ":" << minute << ":" << second << " PM" << std::endl;
            
                hour = hour + 12;
        }
    }
}

FormatSet

if ClockSet = 0
    std :: cout << "current set to 24 hour clock"
    std :: cout << "would you like to change it? (Y/N)"
    std :: cin >> change
    if change = y
        ClockSet = 1

else
    std :: cout << "current set to 12 hour clock"
    std::cout << "would you like to change it? (Y/N)"
    std::cin >> change
    if change = y
        ClockSet = 0


