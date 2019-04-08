int main()
{
	char a[100],b[100];
	int i,a1,b1,m=0;
	gets(a);
	gets(b);
	a1=strlen(a);
	b1=strlen(b);
	for(i=0;i<a1;i++)
	{
		if((int)a[i]>='A'&&(int)a[i]<='Z')
		{
			a[i]=(char)((int)a[i]+32);
		}
	}
	for(i=0;i<b1;i++)
	{
		if((int)b[i]>='A'&&(int)b[i]<='Z')
		{
			b[i]=(char)((int)b[i]+32);
		}
	}
	for(i=0;i<a1-1;i++)
	{
		if((int)a[i]>(int)b[i])
		{
			printf(">");
			break;
		}
		else if((int)a[i]<(int)b[i])
		{
			printf("<");
			break;
		}
		else if((int)a[i]==(int)b[i])
		{
			m+=1;
			continue;
		}
	}
	if(m==a1-1)
	{
		printf("=");
	}
	return 0;
}