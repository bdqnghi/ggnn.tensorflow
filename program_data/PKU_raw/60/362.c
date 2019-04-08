int main()
{
	int i,j,judge=0,n,a[20000]={0},count1=0,count2=0;
	scanf("%d", &n);
	for(i=3;i<=n;i+=2)
	{
		count1=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0) count1+=1;
		}
		if(count1==2)
		{
			a[count2]=i;
			count2+=1;
		}
	}
	for(i=0;i<=count2-1;i++)
	{
		if((a[i+1]-a[i])==2)
		{
			printf("%d %d\n", a[i],a[i+1]);
			judge=1;
		}
	}
	if(judge==0) printf("empty\n");
    return 0;
}
