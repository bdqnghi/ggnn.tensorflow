int main()
{
	char a[1010]={'\0'};
	char c=getchar();
	int num=0;
	while(c!='\n')
	{
		if(c>=97 && c<=122)
		{
			a[num]=c-32;
			num++;
		}
		else
		{
			a[num]=c;
			num++;
		}
		c=getchar();
	}
	int i=0;
	num=1;
	a[strlen(a)]='1';
	for(i=0;i<strlen(a)-1;i++)
	{
		if(a[i]==a[i+1])
			num++;
		else if(a[i]!=a[i+1])
		{
			cout<<"("<<a[i]<<","<<num<<")";
			num=1;
		}
	}
	return 0;
}