// Jordan Steer-Furderer
// CIS 25
// This program accepts user input that represents gross income and calculates the total income after taxes
// given by the specified tax bracket.
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// This function holds the first $30000.
float bracketOne (float a){
    if (a >= 30000){
        return 30000;
    }
    else{
        return a;
    }
}

// This function holds the second increment in the bracket, and if there is less than the full amount
// of the increment, the remaining amount is stored and multiplied by the tax factor.
float bracketTwo (float b){
    if (b >= 19999.99){
        return (19999.99 * 0.9);
    }
    if (b <= 0){
        return NULL;
    }
    else{
        return (b * 0.9);
    }
}

// This function holds the third increment in the bracket, and if there is less than the full amount
// of the increment, the remaining amount is stored and multiplied by the tax factor.
float bracketThree (float c){
    if (c >= 49999.99){
        return (49999.99 * 0.8);
    }
    if (c <= 0){
        return NULL;
    }
    else{
        return (c * 0.8);
    }
}

// This function holds the fourth increment in the bracket, and if there is less than the full amount
// of the increment, the remaining amount is stored and multiplied by the tax factor.
float bracketFour (float d){
    if (d >= 99999.99){
        return (99999.99 * 0.7);
    }
    if (d <= 0){
        return NULL;
    }
    else{
        return (d * 0.7);
    }
}

// This function holds the fifth increment in the bracket, and if there is less than the full amount
// of the increment, the remaining amount is stored and multiplied by the tax factor.
float bracketFive (float e){
    if (e >= 49999.99){
        return (49999.99 * 0.65);
    }
    if (e <= 0){
        return NULL;
    }
    else{
        return (e * 0.65);
    }
}

// This function holds the final increment. If there is anything left of the user input,
// everything beyond this point will be taxed by 40%.
float bracketSix (float f){
    if ( f >= 0){
        return (f * 0.60);
    }
    else {
        return NULL;
    }
}

int main()
{
float grossIncome;
cout << "Please enter your gross income" << endl;
cin >> grossIncome;
float taxOne = bracketOne(grossIncome);
float taxTwo = bracketTwo(grossIncome - 30000);
float taxThree = bracketThree(grossIncome - 49999.99);
float taxFour = bracketFour(grossIncome - 99999.99);
float taxFive = bracketFive(grossIncome - 199999.99);
float taxSix = bracketSix(grossIncome - 249999.99);
//cout << "here is the income from bracket one" << endl;
//cout << taxOne << endl;
//cout << "here is the income from bracket two" << endl;
//cout << taxTwo << endl;
//cout << "here is the income from bracket three" << endl;
//cout << taxThree << endl;
//cout << "here is the income from bracket four" << endl;
//cout << taxFour << endl;
//cout << "here is the income from bracket five" << endl;
//cout << taxFive << endl;
long long sum = taxOne + taxTwo + taxThree + taxFour + taxFive + taxSix;
cout << "your total income after taxes is" << endl;
cout <<  "$" << sum << endl;

return 0;

}
