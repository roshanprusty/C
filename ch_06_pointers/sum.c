#include <stdio.h>
int main()
{
  int i, n, arr[20], sum = 0;
  int *pn = &n, *parr = arr, *psum = &sum;
  float mean = 0.0, *pmean = &mean;

  printf("\n Enter the number of elements in the array:");
  scanf("%d", pn);

  for (i = 0; i < *pn; i++)
  {
    printf("\n Enter the number:");
    scanf("%d", (parr + i));
  }

  for (i = 0; i < *pn; i++)
  {
    *psum = *psum + *(arr + i);
  }

  *pmean = *psum / *pn;

  printf("\n The numbers you entered are:");

  for (i = 0; i < *pn; i++)
    printf("\n%d", *(arr + i));
  printf("\n The sum is:%d", *psum);
  printf("\n The mean is:%f", *pmean);
  return 0;
}
