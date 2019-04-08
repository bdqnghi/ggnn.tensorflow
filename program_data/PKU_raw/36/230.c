main()
{
	char a[1000],b[1000],ar[1000],br[1000];
	int i,j,k,l,ll,w,t;
	char ch;
	int c[1000],d[1000],cr[1000]={0},dr[1000]={0};
	scanf("%s",a);
	scanf("%s",b);
	k=0;
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (c[i]==1)
			continue;
		for (j=i;j<l;j++)
		{
			if (c[j]==1)
				continue;
			if (a[j]==a[i])
			{
				cr[k]++;
				ar[k]=a[j];
				k++;
			}
		}
		if (cr[k])
			k++;
	}
	k=0;
	l=strlen(b);
	for (i=0;i<l;i++)
	{
		if (d[i]==1)
			continue;
		for (j=i;j<l;j++)
		{
			if (d[j]==1)
				continue;
			if (a[j]==a[i])
			{
				dr[k]++;
				br[k]=b[j];
				k++;
			}
		}
		if (dr[k])
			k++;
	}
	for (j=0;j<l-1;j++)
	{
		for (i=0;i<l-1-j;i++)
			if (ar[i]<ar[i+1])
			{
				ch=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=ch;
				t=cr[i];
				cr[i]=cr[i+1];
				cr[i+1]=t;
			}
	}
	ll=strlen(a);
	for (j=0;j<ll-1;j++)
	{
		for (i=0;i<ll-1-j;i++)
			if (br[i]<br[i+1])
			{
				ch=br[i];
				br[i]=br[i+1];
				br[i+1]=ch;
				t=dr[i];
				dr[i]=dr[i+1];
				dr[i+1]=t;
			}
	}
	if (l!=ll)
		w=0;
	else
	{
		for (i=0;i<l;i++)
		{
			if (ar[i]==br[i]&&cr[i]==dr[i])
			{
				w=1;
			}
			else
			{
				w=0;
				break;
			}
		}
	}
	if (w)
		printf("YES\n");
	else
		printf("NO\n");
}