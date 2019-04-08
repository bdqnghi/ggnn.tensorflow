void main()
{
	char a[200],b[200];
	int n,i,k,p,q;
	int g=0;//????
	int cn;
	char c[200];
    scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s %s",a,b);
	    p=strlen(a);
		q=strlen(b);
		for(i=0;i<=q;i++)
		{
			b[p-i]=b[q-i];
		}
		for(i=i;i<=p;i++)
		{
			b[p-i]='0';
		}
		for(i=p-1;i>=0;i--)
	{
		if((a[i]-g)>=b[i])
		{
			cn=a[i]-'0'-b[i]+'0'-g;
			g=0;
			c[i]=cn+'0';
		}
		else
		{
			cn=a[i]-b[i]-g+10;
			g=1;
			c[i]=cn+'0';
		}

	}
	for(i=0;i<p;i++)
	{
		if(c[i]!='0')
		{
			printf("%c",c[i]);
			break;
		}

	}
	for(i=i+1;i<p;i++)
	{
		printf("%c",c[i]);
	}
	printf("\n");
	}
}
