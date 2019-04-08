
int main()
{
	char a[101]={'\0'},b[101]={'\0'};
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]!='\0')
		b[i]=a[i]+a[i+1];
		else
		b[i]=a[0]+a[i];
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	
	return 0;
} 
