int main(void)
{
	int s[100];
	int n,i=0,max,qmax;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&s[i]);
		i++;
	}
	i=1;
	max=qmax=s[0];
	while(i<n)
	{
		if(max<s[i])
			qmax=max,max=s[i];
		else if(qmax<s[i])
			qmax=s[i];
		i++;
	}
	printf("%d\n%d\n",max,qmax);
	return 0;
}