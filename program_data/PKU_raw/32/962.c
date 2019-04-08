void main()
{
	char a[101],b[101];
	int m,p,n,i,j,q,s,t;
	scanf("%d",&m);
	for(t=0;t<m;t++)
	{
	    scanf("%s\n%s",a,b);
		p=strlen(a);
		n=strlen(b);
		j=p-1;
		for(q=n-1;q>=0;q--)
		{
			if(a[j]<b[q])
			{
				a[j]=a[j]+10-b[q]+'0';
				a[j-1]=a[j-1]-1;
			}
			else a[j]=a[j]-b[q]+'0';
			j--;
		}
        s=0;
		for(i=0;i<p;i++)
		{
			if(a[i]!=0)
			{
				printf("%c",a[i]);
				s=1;
			}
			else if(s!=0)printf("%c",a[i]);
		}
		printf("\n");
	}
}