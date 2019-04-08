void main()
{
	int a,b,l,i,m,t,j;
	long sum=0;
	char n[40],y[40],z[40];
	scanf("%d %s %d",&a,n,&b);
	l=strlen(n);
	m=1;
	for(i=1;i<=l;i++)
	{
		t=n[l-i];
		if(t<60)
			sum=sum+(n[l-i]-48)*m;
		else if(t<91)
			sum+=(n[l-i]-55)*m;
		else
			sum+=(n[l-i]-87)*m;
		m=m*a;
	}
	//printf("%d",sum);
	i=0;
	if(sum!=0)
	{while(sum!=0)
	{
		i++;
		t=sum%b;
		if(t<=9)
			y[29-i]=t+48;
		else
			y[29-i]=t+55;
		sum=sum/b;
	}
	for(j=0;j<=i-1;j++)
	{
		z[j]=y[29-i+j];
	}
	z[i]='\0';
	printf("%s",z);}
	else
		printf("0");
}