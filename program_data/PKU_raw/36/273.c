void main()
{
char a[100],b[100];
int c,d,i,j,m,n,l,zeus,athena;
scanf("%s %s",a,b);
c=strlen(a);
d=strlen(b);
if(c!=d)athena=0;
if(c==d)
{
	for(i=0;i<c;i++)
	for(m=i;m<c;m++)
	{
		if(a[i]>a[m])
		{
			n=a[i];
			a[i]=a[m];
			a[m]=n;
		}
        if(b[i]>b[m])
		{
			l=b[i];
			b[i]=b[m];
			b[m]=l;
		}
	}
	zeus=1;
    for(i=0;i<c;i++)
	{
		if(a[i]!=b[i])
		{
			athena=0;zeus=0;break;
		}
	}
	if(zeus)athena=1;
}
if(athena) printf("YES");
else printf("NO");    
}