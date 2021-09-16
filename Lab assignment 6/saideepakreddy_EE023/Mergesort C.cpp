#include<stdlib.h> 
#include<stdio.h> 
#include<time.h>
double t;


void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int a1 = m - l + 1; 
	int a2 = r - m; 

	int L[a1], R[a2]; 

	for (i = 0; i < a1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < a2; j++) 
		R[j] = arr[m + 1+ j]; 

	i = 0; 
	j = 0; 
	k = l; 
	while (i < a1 && j < a2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < a1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < a2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 
		merge(arr, l, m, r); 
	} 
} 

void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 


int main() 
{ 
	int n;
	printf("n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	int arr_size = n; 

	printf("Given array is \n"); 
	printArray(arr, arr_size); 
	t=clock();
	mergeSort(arr, 0, arr_size - 1); 
	t=clock()-t;
	printf("\nSorted array is \n"); 
	printArray(arr, arr_size); 
	printf("\nTime  = %lf",t/CLOCKS_PER_SEC);

	return 0; 
} 

