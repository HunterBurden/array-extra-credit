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
    int size; //stores the size of the array
    int evenNum; //stores the function countEven
    int sumNum; //stores the function countSum
    cout << "Please select the size of the array: ";
    cin >> size; //user input for size
    printArray(numbers, size);
    cout << numbers[0] << endl;
    countEven(numbers, size);
    evenNum = countEven(numbers, size); //giving evenNum the value of countEven
    cout << "The total number of even integers is " << evenNum << endl;
    sumNum = countSum(numbers, size);  //giving sumNum the value of countSum
    cout << "The total sum of the integers is " << sumNum << endl;
    return 0;
} //main

//function definitions
/****************************************************************************************
* Function: printArray
*
* Purpose: print the numbers of the array
*
* Parameters: numbers - the array
*             size - the size of the array
*
* Pre-conditions: numbers and size are valid integer digits
*
* Post-conditions: all of the integers in the array are printed to the screen
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
    int sum = 0; //total sum of the numbers in the array 
    for(int i = 0; i < size; i++) {
        sum += numbers[i]; //sum = sum + numbers[i]
    }
    return sum;
}