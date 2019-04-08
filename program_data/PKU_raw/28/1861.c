int main()
{
	int i,end,j,lon,st;
	char a[100000];
	int b[300];
	gets(a);
	lon=strlen(a);
	end=0;
	j=0;
	for(i=0;i<lon;i++)
	{
		if((a[i]==' ')&&(st==0))
		{
			b[j]=end;
			end=0;
			j++;
			st=1;
		}
		else if(a[i]!=' ')
		{
			end++;
			st=0;
		}
	}
	b[j]=end;
	for(i=0;i<j;i++)
		printf("%d,",b[i]);
	printf("%d",b[j]);


	
	return 0;
}