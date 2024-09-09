Program 1: Given an array of integers, write an algorithm and a program to left 
rotate the array by specific number of elements.
#include <stdio.h>
int main()
{
 int arr[50];
 int n,k;
 scanf("%d",&n);
 scanf("%d",&k);
 for(int i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 while(k--)
 {
 for(int i=0;i<n;i++)
 {
 printf("%d ",arr[i]);
 }
 printf("\n");
 int temp=arr[0];
 for(int i=1;i<n;i++)
 {
 arr[i-1]=arr[i];
 }
 arr[n-1]=temp;
 
 }
 for(int i=0;i<n;i++)
 {
 printf("%d ",arr[i]);
 }
}
Program 1.2
#include <stdio.h>
/* Function to reverse a portion of the array */
void reverse(int arr[], int start, int end) {
 while (start < end) {
 int temp = arr[start];
 arr[start] = arr[end];
 arr[end] = temp;
 start++;
 end--;
 }
}
/* Function to rotate an array by d elements to the left */
void rotateArray(int arr[], int d, int n) {
 d %= n;
 // Reverse the first d elements
 reverse(arr, 0, d - 1);
 // Reverse the remaining n-d elements
 reverse(arr, d, n - 1);
 // Reverse the entire array
 reverse(arr, 0, n - 1);
}
int main() {
 int arr[] = { 1, 2, 3, 4, 5, 6 };
 int n = sizeof(arr) / sizeof(arr[0]);
 int d = 2;
 rotateArray(arr, d, n);
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 return 0;
}
