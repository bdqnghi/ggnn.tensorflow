int main()
{
	int *a[100];
	int k,*m,*n,i,plus=0,j,l;
	scanf("%d",&k);
	m=(int*)malloc(100*sizeof(int));
	n=(int*)malloc(100*sizeof(int));
	for(i=0;i<k;i++)
	{
		scanf("%d",m+i);
		scanf("%d",n+i);
		a[i]=(int*)malloc(((*(m+i))*(*(n+i)))*sizeof(int));
		for(j=0;j<*(m+i);j++)
		{
			for(l=0;l<*(n+i);l++)
				scanf("%d",a[i]+(j*(*(n+i))+l));
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<*(m+i);j++)
		{
			plus=plus+(*(a[i]+(j*(*(n+i)))));
			plus=plus+(*(a[i]+((j+1)*(*(n+i))-1)));
		}
		for(l=1;l<(*(n+i))-1;l++)
		{
			plus=plus+(*(a[i]+l));
			plus=plus+(*(a[i]+l+(*(m+i)-1)*(*(n+i))));
		}
		printf("%d\n",plus);
		plus=0;
	}
	return 0;
}