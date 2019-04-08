void main()
{
	int a,b;
	char n[100];
	scanf("%d %s %d",&a,n,&b);
	int i,j=0;
	int ten[100];
	for(i=0;n[i]!='\0';i++)
	{
		j++;
		if(n[i]>='0' && n[i]<='9')
			ten[i]=n[i]-48;
		else if(n[i]>='A' && n[i]<='Z')
			ten[i]=n[i]-55;
		else
			ten[i]=n[i]-87;
	}
	int te[100];
	te[0]=1;
	for(i=0;i<j;i++)
		te[i+1]=te[i]*a;
	int t=0;
	for(i=0;i<j;i++)
		t+=te[i]*ten[j-i-1];
	char m[100];
	int ben[100];
	j=0;
	if(t==0)
		printf("0\n");
	else
	{
	for(i=0;t!=0;i++)
	{
		j++;
		ben[i]=t%b;
		t=t/b;
	}
	for(i=0;i<j;i++)
	{
		if(ben[j-i-1]>=0 && ben[j-1-i]<=9)
			m[i]=ben[j-1-i]+48;
		else
			m[i]=ben[j-1-i]+55;
	}
	for(i=0;i<j;i++)
		printf("%c",m[i]);
	printf("\n");
	}
}