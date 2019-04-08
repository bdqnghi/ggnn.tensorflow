long fun(int a,int n)
{
	long z;
	if (n==0)
		z=1;
	else
		z=a*fun(a,n-1);
	return z;
}
int main()
{
	int a,b,n,i,j;
	long sum=0;
	char line[100],huan[100];
	scanf("%d",&a);
	scanf("%s",line);
	scanf("%d",&b);
	n=strlen(line);
	for (i=n-1;i>=0;i--)
	{
		if (line[i]>='0' && line[i]<='9')
			sum+=(line[i]-'0')*fun(a,n-1-i);
		if (line[i]>='A' && line[i]<='Z')
			sum+=(line[i]-'A'+10)*fun(a,n-1-i);
		if (line[i]>='a' && line[i]<='z')
			sum+=(line[i]-'a'+10)*fun(a,n-1-i);
	}
	i=0;
	if ((sum%b+'0')>='0' && (sum%b+'0')<='9')
		huan[0]=sum%b+'0';
	else if ((sum%b+'0'+7)>='A' && (sum%b+'0'+7)<='Z')
		huan[0]=sum%b+'0'+7;
	while ((sum/b)!=0)
	{
		i++;
		sum=sum/b;
		if ((sum%b+'0')>='0' && (sum%b+'0')<='9')
			huan[i]=sum%b+'0';
		else if ((sum%b+'0'+7)>='A' && (sum%b+'0'+7)<='Z')
			huan[i]=sum%b+'0'+7;
	}
	for (j=i;j>=0;j--)
		printf("%c",huan[j]);
	return 0;
}
