#include <iostream>//bubble soft
using namespace std;

int main()
{
	char arr[]={'H','B','T','Q','M','Y','C'};
	int length=7;
	char temp;
	for(int i=0; i<length; i++)
	{
		for(int j=0; j<length-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0; i<length; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
