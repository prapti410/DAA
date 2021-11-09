#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx,comp=0,swaps=0;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
		{	 min_idx = j;}
		// Swap the found minimum element with the first element
			comp++;
		}
		swap(&arr[min_idx], &arr[i]);
		swaps++;
	}
	cout<<"Comparison: "<<comp<<endl<<"Swaps: "<<swaps<<endl;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver program to test above functions
int main()
{
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	selectionSort(a, n);
	printArray(a, n);
    }
}