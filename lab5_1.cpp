#include<iostream>
using namespace std;

int main()
{
    int i=1,E=0,O=0;
    while (i != 0)
    {
        cout << "Enter an integer: ";
        cin >> i;
         if(i%2 == 0 )
         {
            if(i != 0)
            {
         	E++;
            }
		 }
         else
         {
            O++;
        }
         
	}
     cout << "#Even numbers = "<<E<<"\n";
     cout << "#Odd numbers = "<<O;
    return 0;
}