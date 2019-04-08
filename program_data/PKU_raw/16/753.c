
int main()
{
	int a[4],i=0;
	char mm;
	while((mm=cin.get())!='\n')
	{
		a[i]=mm-'0';
		i++;
	}
	for(int j=0;j<=i-1;j++)
	{
		printf("%d",a[i-1-j]);
	}

	return 0;
}
