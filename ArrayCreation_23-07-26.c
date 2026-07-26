#include <stdio.h>
int main()
{
  int n, arr[100];
  printf("Enter no. of elements in array: ");
  scanf("%d", &n);
  printf("ENter the elements in the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Array elements are: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}