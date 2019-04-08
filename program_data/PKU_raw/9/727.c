void main()
{
	int n,i,b[100],c[100],j=0,k,mid,p,m=0,max;
	struct patient
	{
		char id[20];
		int age;
	}a[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%s %d",a[i].id,&a[i].age);
	for (i=0;i<n;i++)
	{
		if (a[i].age>=60)
		{
			b[j++]=i;
		}
		else c[m++]=i;
	}
	for (i=0;i<j;i++)
	{   
	max=i;
		for (k=i;k<j;k++)
		{

			if (a[b[k]].age>a[b[max]].age) max=k;
		}
		mid=b[max];
		for (k=max;k>i;k--)
		b[k]=b[k-1];
		b[i]=mid;
	}
	for (i=0;i<j;i++)
	printf ("%s\n",a[b[i]].id);
	for (i=0;i<m;i++)
	printf ("%s\n",a[c[i]].id);
} 