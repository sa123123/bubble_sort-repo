#include<stdio.h>
void bubbleshort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

      }
    }
  }
}
main()
{
  int a[100],i,n;
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter elements of array:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);

  }

      bubbleshort(a,n);
      printf("sorted list:");
      for(i=0;i<n;i++){
        printf("%5d",a[i]);

      }
}
