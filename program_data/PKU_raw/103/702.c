int main()
{
	char s[10000];
	char a[10000];
	int i,j,k,l,m,n;
	int b[10000];
	char c[10000],d;
	l=0;
	scanf("%s",s);
	for(i=0;(d=s[i])!='\0';i++)
	{
		l=l+1;

	}
	
	n=1;k=0;j=0;
for(i=0;(d=s[i])!='\0';i++)
	{
	
		if(s[i]==s[i+1]||s[i]==s[i+1]-32||s[i]==s[i+1]+32)
		{n=n+1;if(s[i]>=97){a[j]=s[i]-32;}else a[j]=s[i];b[j]=n;}
		else {if(s[i+1]!='\0')
			
		{k=k+1;if(s[i]>=97){a[j]=s[i]-32;}else a[j]=s[i];b[j]=n;j=j+1;n=1;}
		else
		{k=k+1;if(s[i]>=97){a[j]=s[i]-32;}else a[j]=s[i];b[j]=n;j=j+1;}
		}
	}
for(i=0;i<k;i++)
{printf("(%c,%d)",a[i],b[i]);}

}