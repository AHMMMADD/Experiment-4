#include<iostream>

using namespace std;

int main()
{

int array[10],size,j,n,x,i;

    cout<< "Please Enter the Array Size: ";cin>> size;
    cout<<"Please Enter " << size << " elements:"; 

    for (i=0;i<size;i++)
{
    cin>>array[i];
}
    cout<<endl;

    for(i=0; i<size; i++)
{
    for(j=i+1;j<size;j++)
{
	if (array[i]>array[j])
	{
	x=array[i];
	array[i]=array[j];
	array[j]=x;
	}
}
}
    
    cout<<"Sorted Data: ";
    for(i=0;i<size;i++)
{
	cout<<array[i]<<" ";
}


return 0;
}
