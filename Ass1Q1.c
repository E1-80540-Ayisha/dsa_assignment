#include<stdio.h>
#define SIZE 9
int rec_binary_search(int arr[],int key,int left,int right);

int main()
{
    int arr[SIZE]={11,22,33,44,55,66,77,88,99};
    int key;
    printf("enter the key to search :");
    scanf("%d",&key);

    int result=rec_binary_search(arr,key,0,SIZE-1);
    if (result !=-1)
        printf("recursive : key is found at index %d \n", result);
    else{
        printf("recurrsive : key is not found !");
    }
    return 0;
}
int rec_binary_search(int arr[],int key,int left ,int right)
{
    int result;
    if(left>right)
        return -1;
    int mid=(left+right)/2;
    if(key==arr[mid])
       return mid;
    else if
    (key<arr[mid])
    result=rec_binary_search(arr,key,left,mid-1);
    else 
    result=rec_binary_search(arr,key,mid+1,right);
    return result;

}
