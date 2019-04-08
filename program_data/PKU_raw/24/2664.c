int main()
{
    int n,i,l,l0=0,l1=50,p,q;
	char a[200][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if(l>l0)
		{
			l0=l;
			p=i;
		}
	    if(l<l1)
		{
			l1=l;
			q=i;
		}
	}
	printf("%s\n",a[p]);
	printf("%s",a[q]);
	return 0;
}

