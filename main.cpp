//intro to pointers in arrays
#include <iostream>
using namespace std;

int main ()
{
    int array1[5] = {5, 10, 15, 20, 25}; //creates an array with 5 elements.
    cout << array1[0] << endl; //prints 5.
    cout << array1[1] << endl; //prints 10.
    cout << array1[2] << endl; //prints 15.

    int *pointer1; //declares pointer.
    int *pointer2; //declares pointer.
    pointer1 = array1; //we would think this assigns the memory address of the entire array, but it actually only assigns the first element's memory address. //same as &array[0].
    pointer2 = &array1[0]; //this assigns the same hex# as above line code.
    cout << *pointer1 << endl; //prints value 5.
    cout << pointer1 << endl; //prints address of value 5.
    cout << *pointer2 << endl; //prints value 5 - same as line 16.
    cout << pointer2 << endl; //prints address of value 5 - same as line 17.

    //below shows how we can point to every array element using the same pointer. *notice how we add by 1.
    cout << pointer1 + 0 << endl; //prints address of element 0 in array. //same as &array[0].
    cout << pointer1 + 1 << endl; //prints address of element 1 in array. //same as &array[1].
    cout << pointer1 + 2 << endl; //prints address of element 2 in array. //same as &array[2].
    cout << pointer1 + 3 << endl; //prints address of element 3 in array. //same as &array[3].
    cout << pointer1 + 4; //prints address of element 4 in array. //same as &array[4].
    return 0;
}
