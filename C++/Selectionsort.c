#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)     
    {  
        small = i;  
        for (j = i+1; j < n; j++){
        	//checking the condition and swapping the Elements
        	  if (arr[j] < arr[small]) {  
                       small = j;  
  
                  int temp = arr[small];  
                  arr[small] = arr[i];  
                   arr[i] = temp;
	  		  } 
		}  
      
    }  
} 
 
//Function to print the unselected array  
void printArr(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++){
    	printf("%d ", a[i]);
	}  
          
}  
  
int main()  
{  
       int n,i;
       
	printf("Enter the number of elements in the array:\n ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers for the array:\n", n	);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	 
    printf("Before sorting array elements are - \n");  
    printArr(arr, n);  
    
    selection(arr, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(arr, n);  
    return 0;  
}    