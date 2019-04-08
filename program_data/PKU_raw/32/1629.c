void stringrev(char *a,char*b)
{	
	int i,j,k,l,n;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b[i]=a[l-1-i];
	}
	b[i]=0;
}
void jianfa(char *a,char*b,char*c)
{	
	int i,j,k,l=strlen(a),t=0;
	char d[101]={0},e[101]={0};
	stringrev(a,d);
	stringrev(b,e);
	for(i=0;i<l;i++)
	{	
		if(e[i]!=0)
		d[i]=d[i]-e[i]-t;
		else
		d[i]=d[i]-'0'-t;
		if(d[i]<0)
		{	
			d[i]=d[i]+10+'0';
			t=1;
		}
		else
		{
			d[i]=d[i]+'0';
			t=0;
		}
	}
	for(j=l-1;j>=0;j--)
	{
		if(d[j]=='0')
			d[j]=0;
		else break;
	}
	stringrev(d,c);
}

void main()
{
	int n,i,j,k;
	char a[101],b[101],c[101]={0};
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s",a,b);
		jianfa(a,b,c);
		printf("%s\n",c);
	}
}