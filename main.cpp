#include <iostream>

using namespace std;



 void insertionSort(int a[], int size) {
	 for(int i =1;i<size;i++ )
		 {
			 int key = a[i];
			 int j = i-1;
			 while(j>=0&&a[j]>key)
				 {
					 a[j+1] = a[j];
					 j--;
				 }
			 a[j+1] = key;
		 }
 }
 void bubbleSort(int a[], int size) {
	 for(int i =0;i<size;i++ )
		 {
				for(int j=0;j<size-i-1;j++)
					{
						if(a[j]>a[j+1])
						{
							int temp = a[j];
							a[j] = a[j+1];
							a[j+1] = temp;
						}
					}
		 }
 }

 void mergeSort(int a[], int size) {
	 if(size<=1)
		 return;
	 int mid = size/2;
	 int left[mid];
	 int right[size-mid];
	 for(int i=0;i<mid;i++)
		 {
			 left[i] = a[i];
		 }

	for(int i=0;i<size-mid;i++)
		 {
			 right[i] = a[i+mid];
		 }
	mergeSort(left,mid);
	 mergeSort(right,size-mid);

	 //merge two sorted arrays
	 int i=0,j=0,k=0;
	 while(i<mid&&j<size-mid)
		 {
			 if(left[i]<right[j])
			 {
				 a[k] = left[i];
				 i++;
				 k++;
			 }
			 else{
				 a[k] = right[j];
				 j++;
				 k++;
			 }
		 }
	 while(i<mid)
		 {
			 a[k] = left[i];
			 i++;
			 k++;
		 }
	 while(j<size-mid)
		 {
			 a[k] = right[j];
			 j++;
			 k++;
		 }
	 
 }


int main(){
	int arr[6] = {3,23,1,21,763,22};
	int size = sizeof(arr)/sizeof(arr[0]);
int a;
	cout<<"Enter choice: \n1) insertion sort\n2) bubble sort \n3) merge sort\n";
	cin>>a;
	switch(a)
		{
			case 1: insertionSort(arr,size);
			break;
			case 2: bubbleSort(arr,size);
					break;
			case 3: mergeSort(arr,size);
					break;
		}
	
	for(int i=0;i<size;i++)
		{
			cout<<" "<<arr[i];
		}
	return 0;
}
