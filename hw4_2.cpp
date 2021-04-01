/*
 * Title: hw4_2.cpp
 * Abstract: This program displays the biggest number in
 *           an array with n integer numbers using a
 *           divide-and-conquer technique.
 * Author: Justin Mello
 * ID: 2002
 * Date: 04/01/2021
 */

#include <iostream>

using namespace std;
int main() {

    int count = 0;

    //Get user input, populate arrays
    cin >> count;
    int numbers[count];

    for(int i = 0; i < count; i++) {
        cin >> numbers[i];
    }

    return 0;
}
