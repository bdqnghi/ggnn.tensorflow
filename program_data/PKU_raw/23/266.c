int main()
{
	char d[100];
	int i=0;
	int t=0;
	do
	{
		d[i]='\0';
		i++;
	}while(i<100);
	gets(d);
	char c[100][100];
	i=0;
	do
	{
		t=0;
		do
		{
		c[i][t]='\0';
		t++;}while(t<99);
		i++;
	}while(i<100);
	i=0;
	int q=0;
	
	do
	{
		t=0;
		do
		{
			if(d[q]!=' ')
			{
				c[i][t]=d[q];
				t++;q++;
			}
			else
			{q++;break;}
		}while(d[q]!='\0');
		i++;
	}while(d[q]!='\0');
	i=i-1;
	while(i>=1)
	{
		t=0;
		while(c[i][t]!='\0')
		{
			printf("%c",c[i][t]);
			t++;
		}
		printf(" ");
		i--;
	}
     t=0;
	while(c[0][t]!='\0')
	{
		printf("%c",c[0][t]);
		t++;
	}
	return 0;
}
