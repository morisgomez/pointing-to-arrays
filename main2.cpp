#include <iostream>
using namespace std;

int main ()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; //array with 7 elements.

    //pointing to the first element of an array
    cout << arr << endl; //when we cout an entire array, we always get the memory address of the first element.
    cout << *arr << endl; //if we cout to dereference of the array, we get the value of the first element. this is like doing cout << *arr[0].
    cout << "----------------" << endl;

    //we can also create a new pointer variable to access the first element of an array:
    int* ptrToArr = arr; //no need to use &arr here bc arr automatically is the address of index 0. NOTE: this points to address of first element.
    cout << ptrToArr << endl; //hence this couts the address of the first element.
    cout << *ptrToArr << endl; //so this couts the value at the address of index 0 //1.
    cout << "----------------" << endl;

    //pointing to the all elements of an array through the array's const pointer: arr (automatically created by c++)
    cout << *(arr + 0) << endl; //couts index 0's value.
    cout << (arr + 0) << endl; //couts index 0's address.
    cout << *(arr + 1) << endl; //couts index 1's value.
    cout << (arr + 1) << endl; //couts index 1's address.
    cout << "----------------" << endl;

    //pointing to the all elements of an array through the array;s const pointer: arr:
    cout << *(ptrToArr + 0) << endl; //couts index 0's value but via pointer ptrToArr.
    cout << (ptrToArr + 0) << endl; //couts index 0's address but via pointer ptrToArr.
    cout << *(ptrToArr + 1) << endl; //couts index 1's value but via pointer ptrToArr.
    cout << (ptrToArr + 1) << endl; //couts index 1's address but via pointer ptrToArr.
    cout << "----------------" << endl << endl;

    //let's use a for loops to access all the indexes of the array:
    //both loops should produce the same output: just accessing the elements via a diff pointer:
    cout << "for loop outputs below via arr const pointer:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "address: " << (arr + i) << "value at address: " << *(arr + i) << endl;
    }

    cout << endl << "for loop outputs below via ptrToArr pointer:" << endl;
    for (int i = 0; i < 7;i++)
    {
        cout << "address: " << (ptrToArr + i) << "value at address: " << *(ptrToArr + i) << endl;
    }
    return 0;
}
/*
if ran, output should be:
0x7ffee1b4fb20
1
----------------
0x7ffee1b4fb20
1
----------------
1
0x7ffee1b4fb20
2
0x7ffee1b4fb24
----------------
1
0x7ffee1b4fb20
2
0x7ffee1b4fb24
----------------

for loop outputs below via arr const pointer:
address: 0x7ffee1b4fb20value at address: 1
address: 0x7ffee1b4fb24value at address: 2
address: 0x7ffee1b4fb28value at address: 3
address: 0x7ffee1b4fb2cvalue at address: 4
address: 0x7ffee1b4fb30value at address: 5
address: 0x7ffee1b4fb34value at address: 6
address: 0x7ffee1b4fb38value at address: 7

for loop outputs below via ptrToArr pointer:
address: 0x7ffee1b4fb20value at address: 1
address: 0x7ffee1b4fb24value at address: 2
address: 0x7ffee1b4fb28value at address: 3
address: 0x7ffee1b4fb2cvalue at address: 4
address: 0x7ffee1b4fb30value at address: 5
address: 0x7ffee1b4fb34value at address: 6
address: 0x7ffee1b4fb38value at address: 7
*/
