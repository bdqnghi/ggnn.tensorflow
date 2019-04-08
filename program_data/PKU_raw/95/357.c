int main(int argc, char* argv[])
{
	char a[80],b[80];
	gets(a);
	gets(b);
	int i,m=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90&&b[i]>=65&&b[i]<=90||a[i]>=97&&a[i]<=122&b[i]>=97&&b[i]<=122)
		{
			if(a[i]>b[i])
			{
				m=1;
				break;
			}
			if(a[i]<b[i])
			{
				m=2;
				break;
			}
		}
		if(a[i]>96&&b[i]<96)
		{
			if(a[i]-32<b[i])
			{
				m=2;
				break;
			}
			if(a[i]-32>b[i])
			{
				m=1;
				break;
			}
		}
		if(b[i]>96&&a[i]<96)
		{
			if(b[i]-32<a[i])
			{
				m=1;
				break;
			}
			if(b[i]-32>a[i])
			{
				m=2;
				break;
			}
		}
	}
	if(m==0)
		printf("=");
	if(m==1)
		printf(">");
	if(m==2)
		printf("<");
	return 0;
}

