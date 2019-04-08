
void main()
{
	int n,i,max,secondmax;
	int num[100];

	scanf("%d",&n);

	scanf("%d",&num[0]);
	max=num[0];
	secondmax=num[0];

	for(i=1;i<n;i++)
	{
		scanf("%d",&num[i]);

		if(num[i]>max)
			max=num[i];
		else if(num[i]>secondmax)
			secondmax=num[i];
	}

	printf("%d\n%d\n",max,secondmax);
}
