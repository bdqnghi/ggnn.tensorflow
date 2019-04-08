int main()
{
	char a[514],b[514],c[514],d[256];
	gets(a);
	gets(b);
	gets(c);
	int i,j,k,l,m,n,t,p,q,x,z,y;
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<l-m+1;i++)
	{
		if(a[i]==b[0])
		{
			k=0;
			for(j=i,t=0;j<i+m;j++,t++)
			{
				if(a[j]!=b[t])
				{
					k=1;
					break;
				}
			}
			if(k==0)
			{
				p=i;
				q=i+m;
				break;
			}
		}
	}
	if(k==0)
	{
		for(i=q,j=0;i<l;i++,j++)
		{
			d[j]=a[i];
		}
		d[j]=0;
		strcat(c,d);
	    a[p]=0;
	    strcat(a,c);
	    printf("%s\n",a);
	}
	else
	{
		printf("%s\n",a);
	}
	return 0;
}
