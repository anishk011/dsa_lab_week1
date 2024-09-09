#include<stdio.h>
int main(){
    
    int i =0;
    int n ;
    int j = n-1 ; 
    int arr[i][j];
    int key ; 
    
    
   printf("enter the value of n  : "); 
   scanf ("%d",&n);
    while(i<n &&j>=0){
        if(arr[i][j]==key){
            printf("%d%d",i , j );
            break;
        }
        if (arr[i][j]==key){
            
            j--;
            
            
        }
        else{
            i++;
        }
        
        
        
    }
    
    
    return 0 ; 
}
