#include <stdio.h>

int binarySearch(int arr[], int n, int x)
 {
   int start = 0;
   int end = n - 1;
   while (start <= end) 
   {
      int mid = start + (end - start) / 2;
      if (arr[mid] == x)
	   {
         return mid;
      } else if (arr[mid] < x) 
	  {
         start = mid + 1;
      } else {
         end = mid - 1;
      }
   }
   return -1;
}

int main()
 {
   int n, x;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the elements of the array in sorted order: ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   printf("Enter the element to be searched: ");
   scanf("%d", &x);
   int result = binarySearch(arr, n, x);
   if (result == -1) {
      printf("Element not found in array");
   } else {
      printf("Element found at index %d", result);
   }
   return 0;
}

