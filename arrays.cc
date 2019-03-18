/*
 *        File: arrays.cc
 *      Author: Hunter Burden
 *        Date: March 18, 2019
 * Description: Array extra credit
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototype
void printArray(const int numbers[], int size);
int countEven(const int numbers[], int size);
int countSum(const int numbers[], int size);

int main() {
    int numbers[8] = {3, 5, 19, 6, 7, 6, 55};
    int size = 7;
    int evenNum;
    int sumNum;
    printArray(numbers, size);
    cout << numbers[0] << endl;
    countEven(numbers, size);
    evenNum = countEven(numbers, size);
    cout << "The total number of even integers is " << evenNum << endl;
    sumNum = countSum(numbers, size);
    cout << "The total sum of the integers is " << sumNum << endl;
    return 0;
}

//function definitions

/****************************************************************************************
* Function: printArray
*
* Purpose:
*
* Parameters:
*
* Pre-conditions
*
* Post-conditions:
*
*****************************************************************************************/
void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++) {
        cout << numbers[i] << endl;
    }
}

/****************************************************************************************
* Function: countEven
*
* Purpose: to count the even numbers in an array
*
* Parameters: numbers - the array
*             size - the size of the array
*
* Pre-conditions: numbers and size are valid integer digits
*
* Post-conditions: the total even integers in the array are counted
*
*****************************************************************************************/
int countEven(const int numbers[], int size) {
    int count = 0; //total count of even integers in the array
    for(int i = 0; i < size; i++) {
        if(numbers[i] % 2 == 0) {
            count++;
        } //if statement end
    } //for loop end
    return count;
}

/****************************************************************************************
* Function: countSum
*
* Purpose: to count the total sum of the digits in an array
*
* Parameters: numbers - the array
*             size - the size of the array
*
* Pre-conditions: numbers and size are valid integer digits
*
* Post-conditions: all the integers of the array are added to find the               
*                  total sum
*****************************************************************************************/
int countSum(const int numbers[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += numbers[i]; //sum = sum + numbers[i]
    }
    return sum;
}