
int main()
{
	int i,a,b,c=0,t[100],l,k[100];
	char s[100];
	scanf("%d %s %d",&a,s,&b);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]>='a')&&(s[i]<='z'))
		t[i]=s[i]-87;
		else if((s[i]>='A')&&(s[i]<='Z'))
		t[i]=s[i]-55;
		else
			t[i]=s[i]-48;
	}
	for(i=l-1;i>-1;i--)
	{
		c+=t[i]*pow(a,l-1-i);
	}
	for(i=1;;i++)
	{

		k[i]=c%b;

		if(k[i]>9)
			k[i]=k[i]+55;
		if(c<b)
			break;
		int h=c/b;
		c=h;
	
	}
	for(;i>0;i--)
	{	
		if(k[i]>=55)
			printf("%c",k[i]);
		else
		printf("%d",k[i]);
	}
	return 0;
}
