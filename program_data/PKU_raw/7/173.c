int main()
{
char sr[1000];
gets(sr);
char a[1000],b[1000];
scanf("%s%s",a,b);
int len,ken;
len=strlen(sr);
ken=strlen(a);
int i,j,k,m;
m=0;
// Ilovehomelive live==>jdkfjdsjfks
for(i=0;i<len;i++)
{
	if(sr[i]==a[0]){j=i;
	for(k=0;k<ken;k++)
		if(sr[k+j]==a[k]){m=1;}
		else if(sr[k+j]!=a[k]){m=0;break;}
	}
	if(m==1)  break;
}
if(m==0){printf("%s",sr);}
char c[1000],d[1000];
if(m==1)
{
	for(i=0;i<j;i++)
		{c[i]=sr[i];}
	c[j]='\0';
	if(j+ken==len)
		{printf("%s%s",c,b);}
	if(j+ken<len)
	{
		for(i=j+ken;i<len;i++)
			{d[i-j-ken]=sr[i];}
			d[len-j-ken]='\0';
			printf("%s%s%s",c,b,d);
	}
}
return 0;
}
