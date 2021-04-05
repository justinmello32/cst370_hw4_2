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

int returnMaxInt(int array[], int start, int end ) {

    //If single item
    if(start == end) {
        return array[start];
    }
    else {
        int max1 = returnMaxInt(array,start,(start+end)/2);
        int max2 = returnMaxInt(array,(start+end)/2+1, end);
        return(max(max1,max2));
    }

}

int main() {

    int count = 0;

    //Get user input, populate arrays
    cin >> count;
    int numbers[count];

    for(int i = 0; i < count; i++) {
        cin >> numbers[i];
    }

    int max = returnMaxInt(numbers, 0, count - 1 );
    cout << max;

    return 0;
}
