int power(long int a,long int i)
{
	unsigned long j,k=1;
	for (j=0;j<i;j++)
		k=k*a;
	return(k);
}
int main()
{
	long int a,b,i,j,l,t,y,k;
	unsigned long  temp=0,x;
	char p[100]={0},re[100]={0};
	scanf("%d %s %d",&a,p,&b);
	l=strlen(p);
	for (i=0;i<l;i++)
	{
		if (p[l-1-i]>='a'&&p[l-1-i]<='z')
           temp+=(p[l-1-i]-'a'+10)*power(a,i);
		if (p[l-1-i]>='A'&&p[l-1-i]<='Z')
           temp+=(p[l-1-i]-'A'+10)*power(a,i);
		if (p[l-1-i]>='0'&&p[l-1-i]<='9')
           temp+=(p[l-1-i]-'0')*power(a,i);
	}
	for (j=0;;j++)
	{
		x=power(b,j);
		y=temp/x;
		if (y<b)
			break;
	}
	j++;
	for (k=j-1;k>=0;k--)
	{
		x=power(b,k);
		t=temp/x;
		if (t>=10)
			re[j-1-k]='A'+t-10;
		else
			re[j-1-k]='0'+t;
		temp-=x*t;
	}
	printf("%s",re);
	return (0);
}
