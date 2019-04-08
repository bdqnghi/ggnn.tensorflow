int main()
{
	char a[100],b[100];   //?a???????b??????
	int i,j;
	for(i=0;i<100;i++)
		b[i]=0;
	int n1,n2,m=0;
	
	double dn1; 


	cin>>n1>>a>>n2;
	int lena=strlen(a);
	for(i=0;i<lena;i++)
	{
		if(a[i]>='a' && a[i]<='z')     //?????????????
		{a[i]=a[i]-'a'+10;}
		else if(a[i]>='A' && a[i]<='Z')
		{a[i]=a[i]-'A'+10;}
		else 
		{a[i]=a[i]-'0';}      //????ASCII?????
	}
	for(i=0;i<lena;i++)
	{
		dn1=n1;
		m=m+a[i]*pow(dn1,lena-i-1); //???????10???
	}

	i=1;
	do
	{
		b[i]=m%n2;          //?10??????n2???
		m=m/n2;
		i++;
	}
	while(m!=0);
	int t=i-1;
	for(j=t;j>0;j--)
	{
		if(b[j]>=0 && b[j]<=9)  //?b???????????ASCII????
		{b[j]=b[j]+'0';}
		else if(b[j]>=10)
		{b[j]=b[j]-10+'A';}
		cout<<b[j];
	}
	cout<<endl;
	return 0;
}