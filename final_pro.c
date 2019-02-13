#include<stdio.h>
void main()
{
  int i,n,a[100],temp,k;

  printf("Enter no. of elements:");
  scanf("%d",&n);

  printf("enter elements one by one:");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
for(i=0;i<n-1;i++){
  for(k=0;k<n-1-i;k++){
    if(a[k]>a[k+1])
    {
      temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
  }
  }
}
  printf("the sorted list is: ");
  for(i=0;i<n;i++){
    printf("%5d",a[i]);
  }
}
