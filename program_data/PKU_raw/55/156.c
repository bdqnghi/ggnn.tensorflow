int main(int argc, char* argv[])
{
	int a,b,i,j,l,k;
	int sum=0,out=0;
	char s[51];
	
	scanf("%d %s %d",&a,s,&b);
	l=strlen(s);
	//printf("%d\n",l);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<=122)
			s[i]=s[i]-32;
	}
//	printf("%s\n",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			k=s[i]-55;//printf("%d\n",k);
		}
		else
		{
			k=s[i]-48;//printf("=%d\n",k);
		}
		for(j=0;j<l-i-1;j++)
		{
			k=k*a;//printf("%d\n",k);
		}
	//	printf("+%d\n",k);
		sum=sum+k;
	}
	for(i=50;i>=0;i--)
	{
		if(sum%b>=0&&sum%b<=9)
		{
			s[i]=sum%b+48;
		}
		if(sum%b>=10)
		{
			s[i]=sum%b+55;
		}
		sum=(sum-sum%b)/b;
		if(sum==0)
			break;
	}
	for(j=i;j<51;j++)
	{
		printf("%c",s[j]);
	}
	printf("\n");
	return 0;
}