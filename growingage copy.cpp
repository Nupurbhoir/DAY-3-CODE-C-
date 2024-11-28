
#include <iostream>
using namespace std;

int main() {
    int currentAge;
    int yearsToGrow;
    cout << "Enter your current age: ";
    cin >> currentAge;
    cout << "Enter the number of years to grow: ";
    cin >> yearsToGrow;
     int newAge = currentAge + yearsToGrow;
     cout << "In " << yearsToGrow << " years, you will be " << newAge << " years old." << endl;
     return 0;
}