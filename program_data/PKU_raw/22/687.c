	int a[300];
	int m,n,i=0,s;
int max()
{
	int k,j;
	k=a[0];
	for(j=1;j<=i;j++)
	{
		if(a[j]>k)
			k=a[j];
	}
	return k;
}
void main()
{
	scanf("%d",&a[0]);
	while(getchar()==',')
	{
		i++;
		scanf("%d",&a[i]);	
	}
	m=max();
	for(s=0;s<=i;s++)
		if(a[s]==m)
			a[s]=-1;
	n=max();
	if(n!=-1)
		printf("%d",n);
	else
		printf("No");
}
