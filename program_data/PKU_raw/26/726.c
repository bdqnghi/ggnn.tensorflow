int main()
{
	char a[110]={0};
	gets(a);
	int i;
	int count=0;
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)
		{
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		if(a[i]==32&&a[i+1]==32)
		{
			continue;
		}
		printf("%c",a[i]);
	}
	return 0;
}
