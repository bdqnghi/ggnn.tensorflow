void cf(char a[])
{
	int t=strlen(a),i;
	for(i=0;i<t;i++)
		a[i]=(a[i]-48)*2+48;
	for(i=0;i<t-1;i++)
	{
		if(a[i]>57)
		{
			a[i]-=10;
			a[i+1]+=1;
		}
	}
	if(a[t-1]>57)
	{
		a[t-1]-=10;
		a[t]='1';
	}
}
void strre(char a[])
{
	int i,j,k;
	char t;
	k=strlen(a);
	for(j=0,i=k-1;j<k/2;j++,i--)
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
	}
}
void main()
{
	int n;
	char a[100]={'1'};
	scanf("%d",&n);
	while(n--)
	{
		cf(a);
	}
	strre(a);
	puts(a);
}