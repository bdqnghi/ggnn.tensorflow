struct c
{
	char m;
	int n;
};
int main()
{
	struct c fh[90],y;
	char a[400],b[400],x;
	int i,j=0,k,l,t=0,cou;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if((a[i]>=97&&a[i]<=122)||(a[i]>=65&&a[i]<=90))
		{
			b[j]=a[i];
			j++;
		}
	}
	l=j;
	if(j==0)
	{
		printf("No");
		return 0;
	}
	else
	{
	for(i=0;i<j;i++)
	{
		cou=0;
		for(k=0;k<i;k++)
		{
			if(b[i]==b[k])
				cou++;
		}
		if(cou==0)
		{
			fh[t].m=b[i];
			fh[t].n=0;
			t++;
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<l;j++)
		{
			if(b[j]==fh[i].m)
				fh[i].n++;
		}
	}
	for(i=t-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(fh[i].m<fh[j].m)
			{
				y=fh[i];fh[i]=fh[j];fh[j]=y;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%c=%d\n",fh[i].m,fh[i].n);
	}
	}
	return 0;
}