#include<stdio.h>

int Binarysearch(int arr[], int size, int element){

int low = 0, mid;
int high = size - 1;

   while (low<=high)
   {
       mid = (low + high)/2;
       if (arr[mid] == element)
       {
           return mid;
       }
       if (element <= arr[mid])
       {
           high = mid-1;
       }
       else{
       low = mid + 1;
       }
   }
   return -1;
}

int main(){

 int size, element;
 printf("Enter the size of array\n");
 scanf("%d", &size);

 int arr[size];

printf("Enter the elements in array in ascending order\n");
 for (int i = 0; i < size; i++)
 {
    scanf("%d", &arr[i]);
 }

printf("Enter the element to be searched in array\n");
scanf("%d", &element);

  int B_search = Binarysearch(arr, size, element);

    printf("The element is present at index : %d",  B_search );

return 0;
}