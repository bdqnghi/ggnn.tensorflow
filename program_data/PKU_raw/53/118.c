int main()
{
	int n,i,j,elem[200],s=0;
	int *p=elem;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=0,s=0;j<i;j++)
		{
			if(*(p+i)==*(p+j)) s++;
		}
		if(s==0)
		{
			printf(",%d",*(p+i));
		}
	}
}