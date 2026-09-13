#include "sort.h"
void read(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
}

void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void insertion_sort(int a[], int n)
{
	int i, j, key;
    for (i=1; i<n; i++){
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

}

void selection_sort(int a[], int n)
{
	int i, j, idx_min, temp;
    for (i=0; i<n-1; i++){
        idx_min = i;
        for (j=i+1; j<n; j++){
            if(a[idx_min] > a[j]) idx_min = j;
        }
        temp = a[idx_min];
        a[idx_min] = a[i];
        a[i] = temp;
    } 
        
}

void bubble_sort(int a[], int n)
{
	int i, j, temp;
    for (i=0; i<n; i++){
        for(j=0; j<n-1-i; j++){
            if (a[j+1] < a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
	
}
