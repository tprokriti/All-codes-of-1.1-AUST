#include<iostream>
#include<conio.h>

using namespace std;

   void insert( int n, int*arr, int position, int element)
   {
    if(position > n)
    {
      cout << "Invalid Input" <<endl;
    }
    else
    {
     for( int i = n; i >= position ;i--)
     {
         *(arr+ i +1) = arr[i-1];
     }
     arr[position-1] = element;
    }

   }

   int main()
   {
       int n, i, position,element;

       cout <<"Enter array size :" << endl;
       cin >> n;

       int arr[n];
       cout << "Enter array elements :"<< endl;

       for(i = 0; i<n; i++)
       {
           cin >> arr[i];
       }

       cout << "Enter the position where the element need to be insert :" << endl;
       cin >> position;

       cout << "Enter the new element that to be inserted :" << endl;
       cin >> element;

       insert(n,arr, position, element);
       cout << "Array elements after insertion is" <<endl;

       for( int i = 0; i<=n;i++)
       {
       cout << arr[i] << endl;
       }
        return 0;
   }


