#include <iostream>
#include <string>
#include <sstream>

bool isCalendarValid(int daysInYear, int daysInMonth) {
    int maxMonths = (daysInYear * 2) / daysInMonth + 1;  // *2 for leap year possibility
    return maxMonths <= 99 && daysInMonth <= 99;
}

bool isDateValid(int year, int month, int day, int daysInYear, int daysInMonth) {
    if (month < 1 || day < 1) return false;
    
    // Calculate leap years
    long long totalDays = (long long)(year - 1) * daysInYear;
    int leapMonths = totalDays / daysInMonth;
    totalDays += leapMonths * daysInMonth;
    
    // Check current year
    if (month > (daysInYear / daysInMonth) + 1) return false;
    if (month == (daysInYear / daysInMonth) + 1) {
        if (day > (totalDays + daysInYear) % daysInMonth) return false;
    } else if (day > daysInMonth) return false;
    
    return true;
}

char calculateDayOfWeek(int year, int month, int day, int daysInYear, int daysInMonth, int daysInWeek) {
    long long totalDays = 0;
    
    // Count days from 0001-01-01
    totalDays += (long long)(year - 1) * daysInYear;
    int leapMonths = totalDays / daysInMonth;
    totalDays += leapMonths * daysInMonth;
    
    totalDays += (month - 1) * daysInMonth;
    totalDays += day - 1;
    
    return 'A' + (totalDays % daysInWeek);
}

int main() {
    int daysInYear, daysInMonth, daysInWeek;
    std::string date;
    
    std::cin >> daysInYear >> daysInMonth >> daysInWeek >> date;
    
    if (!isCalendarValid(daysInYear, daysInMonth)) {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    std::stringstream ss(date);
    std::string yearStr, monthStr, dayStr;
    std::getline(ss, yearStr, '-');
    std::getline(ss, monthStr, '-');
    std::getline(ss, dayStr);
    
    int year = std::stoi(yearStr);
    int month = std::stoi(monthStr);
    int day = std::stoi(dayStr);
    
    if (!isDateValid(year, month, day, daysInYear, daysInMonth)) {
        std::cout << -1 << std::endl;
        return 0;
    }
    
    char dayOfWeek = calculateDayOfWeek(year, month, day, daysInYear, daysInMonth, daysInWeek);
    std::cout << dayOfWeek << std::endl;
    
    return 0;
}