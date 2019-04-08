
int main()
{
	int n=0,result=0,i=0;
	scanf("%d",&n);
	for(i=1;1;i++)
	{
		if(n==1)
		{
			printf("End\n");
			break;
		}
		if(n%2==0)
		{
			result=n/2;
			printf("%d/2=%d\n",n,result);
			n=result;
		}else if(n%2==1){
			result=n*3+1;
			printf("%d*3+1=%d\n",n,result);
			n=result;
		}

	}
	return 0;
}