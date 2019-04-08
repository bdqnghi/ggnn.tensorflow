int main()
{
	char a[50],b[50],*p1,*p2;
	int m,n,c,i,j,flag;
	scanf("%s %s",a,b);
	p1=a;
	p2=b;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	if(*(p2+i)==*p1)
	{
		c=i;
		flag=1;
		for(j=c;j<c+m;j++)
		if(*(p2+j)!=*(p1+j-c))
		{
			flag=0;
			break;
		}
		if(flag==1)
		{
			printf("%d",c);
			break;
		}
	}
	return (0);
}