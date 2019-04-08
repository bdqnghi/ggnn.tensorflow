void main()
{
	int l,x,y,i,j;
	long n;
	char a[100],b[100];
	n=0;
	scanf("%d %s %d",&x,a,&y);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]<58)
			n=x*n+a[i]-48;
		else if(a[i]>96)
			n=x*n+a[i]-87;
		else
			n=x*n+a[i]-55;
	}
	for(i=0;n!=0;i++)
	{
		if(n%y<10)
			b[i]=n%y+48;
		else
			b[i]=n%y+55;
		n=(n-n%y)/y;
	}
	if(i==0)
		printf("0");
	for(j=i-1;j>=0;j--)
		printf("%c",b[j]);
	printf("\n");
}
