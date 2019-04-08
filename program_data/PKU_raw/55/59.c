int main()
{
	int a,b,temp,i;
	long s=0,l=1;
	char n[20000],m[20000];
	scanf("%d%s%d",&a,n,&b);
	int len = strlen(n);
	for (i=len-1; i>=0; l*=a,i--)
	{
		if (n[i]<='9' && n[i]>='0')
			s+=(n[i]-'0')*l;
		else if(n[i]>='a' && n[i]<='z')
			s+=(n[i]-'a'+10)*l;
		else
			s+=(n[i]-'A'+10)*l;
	}
	for (i=0;s>0;i++)
	{
		temp=s%b;
		s=s/b;
		if (temp>9)
			m[i]=(char)'A'+temp-10;
		else
			m[i]=(char)'0'+temp;
	}
		for (i--;i>=0;i--)
	{
			printf("%c",m[i]);
	}
         printf("\n");
	return 0;
}