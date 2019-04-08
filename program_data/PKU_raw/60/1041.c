int ifsu(int i)
{ 
	int temp=0,j;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			temp++;
	}
	if(temp==0)
		return 1;
	else return 0;
}
void main()
{
	int n,a[5000]={0},time=0,i,j,temp=0;
	scanf("%d",&n);
	j=0;
	for(i=2;i<=n;i++)
	{
		if(ifsu(i)==1)
		{
		a[j]=i;time++;
		j++;}
		
	}

	for(i=1;i<time-1;i++)
	{	
		if(a[i]==(a[i+1]-2))
			
		printf("%d %d\n",a[i],a[i+1]);
		temp++;
		
	}
	if(temp==0)
		printf("empty");
}

