int main()
{
	char a[10000];
	int n,i,j,k;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		if((a[i]==' ')&&(a[i-1]==' '))
		{
			continue;
		}
		else 
		{
			printf("%c",a[i]);
		}
	}


	
	
	
	return 0;
}