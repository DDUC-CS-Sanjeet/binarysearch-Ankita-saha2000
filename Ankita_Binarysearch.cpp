//Ankita_Saha
//19HCS4069
#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int* Array, int sI, int LI, int x)
{
    int mid = 0;
	if(sI>LI)
	    return false;
	else
	{
		mid=(sI+LI)/2;
		if(Array[mid]==x)
	        return true;
		else if(Array[mid]>x)
		    binarySearch(Array, sI, mid-1, x);
		else
		    binarySearch(Array, mid+1, LI, x);
    }
}

int BINARYSearch(int* Array, int sI, int LI, int x)
{
  int mid = 0;
  while(sI<=LI)
  {
    mid = (sI+LI)/2;
    if(Array[mid] == x)
    {  
        return true;
    } 
    else if(Array[mid] < x)
        sI = mid+1;
    else if(Array[mid] > x)
        LI = mid-1;
  }
   if(sI>LI)
        return false;
}

int main()
{
	int size;
	cout<<"Enter the size of the array::"<<endl;
	cin>>size;
	int *Array= new int[size];
	cout<<"Enter the elements of the array::"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Array[i];
	}
	sort(Array,Array+size);
	cout<<"The sorted array is::"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<Array[i]<<" ";
		
	}
	cout<<endl;
	int choice;
	cout<<"1.Binary Search using recursion."<<endl;
	cout<<"2.Binary Search using iteration."<<endl;
	cout<<"Enter your choice::"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			int x;
			cout<<"Enter the element that needs to be found::"<<endl;
			cin>>x;
			int result = binarySearch(Array,0,size-1,x);
			if(result == true)
			  cout<<"The no is present at index  "<<result;
			else
			cout<<"The no is not found.";
		
			
		}
		break;
		case 2:
			{
			  int x;
			  cout<<"Enter the element that needs to be found::"<<endl;
			  cin>>x;
			  int result = BINARYSearch(Array,0,size-1,x);
			if(result == true)
			  cout<<"The no is present at index  "<<result;
			else
			cout<<"The no is not found.";
			}
			break;
	}
	return 0;
	
	
}

