long int f(int ia[],int m,int la);
void main()
{
	char a[200],b[200];
	int m,n,la,i,j,ia[200],ib[200],t;
	long int sum;
	scanf("%d",&m);
	scanf("%s",a);
	scanf("%d",&n);
	la=strlen(a);
	for(i=0;i<la;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			t=a[i]-'0';
		else if(a[i]>='a'&&a[i]<='z')
			t=a[i]-'a'+10;
		else if(a[i]>='A'&&a[i]<='Z')
			t=a[i]-'A'+10;
		ia[la-i-1]=t;
	}
	sum=f(ia,m,la);
	if(sum==0)
		printf("%d",sum);
	for(i=0;sum!=0;i++)
	{
		ib[i]=sum%n;
		sum=sum/n;
	}
	
	for(j=0;j<i;j++)
	{
		if(ib[j]<10)
			b[i-1-j]=ib[j]+'0';
		else if(ib[j]>9)
			b[i-1-j]=ib[j]-10+'A';
	}
	for(j=0;j<i;j++)
		printf("%c",b[j]);


}
long int f(int ia[],int m,int la)
{
	int i,j;
	long int sum=0,num;
	for(i=0;i<la;i++)
	{
		num=1;
		for(j=0;j<i;j++)
			num=num*m;
		sum=sum+num*ia[i];
	}
	return(sum);
}