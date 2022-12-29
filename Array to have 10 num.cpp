#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    int sum=0;
    for(int i=0; i<10; i++)
    	{ 
    	   if(i==3 || i==5) 
    	   	{ 
    	   		continue;
		   	}
		   	else 
		   	   { 
				   sum += arr[i];
			   }
		}
		cout<<sum;
    return 0;
}
