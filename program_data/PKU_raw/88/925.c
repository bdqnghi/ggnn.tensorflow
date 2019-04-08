int main()
{
	char a[30]=" ";
	gets(a);
	int g=1;
	char *p=a;
	for(int i=0;i<30;i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			cout<<*(p+i);
			g=1;
		}
		if((*(p+i)<'0'||*(p+i)>'9')&&g==1)
		{
			cout<<endl;
			g=0;
		}
	}
	return 0;
}