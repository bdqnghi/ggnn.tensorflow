int max(int num[],int n)
{
	int i,result=num[0];
	for(i=1;i<n;i++)
		if(num[i]>result)
			result=num[i];
		return(result);
}
void main(void)
{
	int n,num[100],m1,m2,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	m1=max(num,n);
	printf("%d\n",m1);
	for(i=0;i<n;i++)
		if(num[i]==m1)
			num[i]=-100;
		m2=max(num,n);
		printf("%d\n",m2);
}


