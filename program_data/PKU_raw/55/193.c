int convertorto10(char A[],int code,int right)
{
	if(right==0)
		return(A[0]-'0');
	else return(A[right]-'0'+code*convertorto10(A,code,right-1));
}
void main()
{
	int a,b,l,c,i,j;
	char n[100],nf[100],m[100],mf[100];
	scanf("%d %s%d",&a,n,&b);
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		if(64<n[i]&&n[i]<91)
			nf[i]=n[i]-7;
		else if(n[i]>96)
			nf[i]=n[i]-39;
		else nf[i]=n[i];
	}
	c=convertorto10(nf,a,l-1);
	i=0;
	while(c/b>0)
	{
		m[i]=c%b;
		c=c/b;
		i=i+1;
	}
	m[i]=c;
	for(j=0;j<=i;j++)
		mf[j]=m[i-j];
	for(j=0;j<=i;j++)
	{
		if(mf[j]<10)
			mf[j]=mf[j]+48;
		else if(mf[j]>9)
			mf[j]=mf[j]+55;
	}
	for(j=0;j<=i;j++)
		printf("%c",mf[j]);
}
