#include<stdio.h>
int main()
{
  int arr[100],n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
              arr[j]=-1;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]==-1)
      continue;
      printf("%d ",arr[i]);
  }
}