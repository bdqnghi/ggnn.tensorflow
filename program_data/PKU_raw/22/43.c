int max(int num[],int n)
{
	int result,i;
	result=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>result)
			result=num[i];
	}
	return(result);
}
void main(void)
{
	int n,num[300],i,m1,m2;
	char c;
	for(i=0;i<300;i++)
		num[i]=-1;
	scanf("%d",&num[0]);
	n=1;
	for(i=1;i<300&&(c=getchar())!='\n';i++)
	{
		scanf("%d",&num[i]);
		n++;
	}
	m1=max(num,n);
	for(i=0;i<n;i++)
	{
		if(num[i]==m1)
			num[i]=-1;
	}
	m2=max(num,n);
	if(m2!=-1)printf("%d\n",m2);
	else printf("No\n");
}
