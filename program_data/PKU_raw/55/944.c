void main()
{
	char str[100];
	long d[100],x,y,i,j,n,m=0,p,q,k;
	scanf("%ld%s%ld",&x,str,&y);
	k=strlen(str);
	for(i=0;i<k;i++)
	{
		if(str[i]>=48&&str[i]<=57) str[i]=str[i]-48;
		else if(str[i]>=65&&str[i]<=90) str[i]=str[i]-55;
		else if(str[i]>=97&&str[i]<=122) str[i]=str[i]-87;
		n=k-1-i;
		q=(long)pow(x,n);
		m=m+str[i]*q;
	}
	for(i=0;p!=0;i++)
	{
		d[i]=m%y;
		p=m/y;
		m=p;
	}
	for(j=i-1;j>=0;j--)
	{
		if(d[j]>=0&&d[j]<10) printf("%ld",d[j]);
		else
		{
			d[j]=d[j]+55;
			printf("%c",d[j]);
		}
	}
}