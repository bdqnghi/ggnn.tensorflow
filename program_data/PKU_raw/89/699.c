int main()
{
	int n,t,c[10000]={0},t1,t2;
	scanf("%d",&n);
sd:	
	scanf("%d %d",&t1,&t2);
	if((t1+t2)!=0)
	{
		c[t1]--;
		c[t2]++;
		goto sd;
	}
	for(t=0;t<=n-1;t++)
	{
		if(c[t]==n-1){goto s;}
		else if(t==n-1)
		{
			printf("NOT FOUND\n");
			goto ss;
		}
	}
s:
	printf("%d\n",t);
ss:
	//printf("%d %d %d\n",n,c[0],c[1]);
	return 0;
} 