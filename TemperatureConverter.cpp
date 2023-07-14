#include <bits/stdc++.h>

using namespace std;

// convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {

    int choice;
    double temperature;

    cout << "Temperature Converter:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;
    if (cin.fail()) {
        cout << "Enter the value of in numbers.\n";
    } else {
        double convertedTemperature;

        if (choice == 1) {
            convertedTemperature = celsiusToFahrenheit(temperature);
            cout << temperature << " degrees Celsius is equal to " << convertedTemperature << " degrees Fahrenheit." << endl;
        } else if (choice == 2) {
            convertedTemperature = fahrenheitToCelsius(temperature);
            cout << temperature << " degrees Fahrenheit is equal to " << convertedTemperature << " degrees Celsius." << endl;
        } else {
            cout << "Invalid choice. Please enter the valid choice either 1 or 2." << endl;
            return 0;
        }
    }

    return 0;
}