int main()
{
	int k=0,i,j,q=0,m=1,l=0,n,a[300],b[300];
	char c;
	do
	{
		scanf("%d%c",&a[k++],&c);
	}while(c!='\n');
    b[0]=a[0];
	for(i=1;i<k;i++)
	{
		n=0;
		for (j=0;j<i;j++)
		{
			if (a[j]==a[i])
				n=n++;
		}
		if(n==0)
		{
			b[m]=a[i];
            m=m++;
		}
	}
	//for (i=0;i<m;i++)
//	printf("%d %d\n",b[i],m);
    for(i=0;i<m;i++)
	{
		n=0;
		for (j=0;j<m;j++)
		{
			if (b[j]>b[i])
				n=n++;
		}
	//	printf("%d\n",n);
		if (n==1)
		{
			q=i;
			l=l++;
		}
	}
	if (l==1)
	printf("%d\n",b[q]);
	else
		printf("No\n");
	return 0;
}
