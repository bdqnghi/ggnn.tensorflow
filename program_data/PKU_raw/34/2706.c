void main()
{
	int n,t,k;
	scanf("%d",&n);
	if(n!=1) for(k=1;t!=1;k++)
	{if(n%2==0){t=n/2;printf("%d/2=%d\n",n,t);n=t;if(n==1)break;}
	if(n%2!=0){t=n*3+1;printf("%d*3+1=%d\n",n,t);n=t;if(n==1)break;}}
	printf("End");
	
}
