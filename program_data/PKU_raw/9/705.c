int main()
{
	struct patient
	{
		char a[10];
		int age;
	}pat[100];
	int n,i,m,b[100],l=0,p,q=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s%d",pat[i].a,&pat[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
		{
			l=l+1;
			b[l]=pat[i].age;
		}
	}
	for(i=1;i<=l;i++)
	{
		for(m=i+1;m<=l;m++)
			if(b[i]<b[m])
			{
				p=b[i];
				b[i]=b[m];
				b[m]=p;
			}
	}
	for(i=1;i<=l;i++)
	{
		for(m=1;m<=l;m++)
		{
			if(b[i]==b[m])
			{
				if(i!=m)b[m]=0;
			}
		}
	}
	for(i=1;i<=l;i++)
	{
		for(m=0;m<n;m++)
			if(pat[m].age==b[i])printf("%s\n",pat[m].a);
	}
	for(i=0;i<n;i++)
		if(pat[i].age<60)printf("%s\n",pat[i].a);
	return 0;
}