#include<stdio.h>
#include<math.h>
int prime(int a)
{
	if(a==1){
		return 0;
	}
	int i;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	if(prime(n)){
		printf("0");
	}
	else
	{
		int left=0,right=0,i;
	   	for(i=n-1;left==0;i--)
        {
			if(prime(i)){
				left=i;
				break;
			}
        }
        for(i=n+1;right==0;i++){
        	if(prime(i)){
        		right=i;
        		break;
			}
		}
    	if(n-left<right-n){
    		printf("%d",n-left);
		}
		else{
			printf("%d",right-n);
		}
	}
}