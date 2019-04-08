int main()
{
	char c[100][100]={0},a[100],(*p)[100]=c;
	int i,j=0;
	char d;
	for(i=0;(c[j][i]=getchar())!='\n';i++)
	{
		if(c[j][i]==' ')
		{
			c[j][i]='\0';
			j++;
			i=-1;
		}
	}
	c[j][i]='\0';
	int num=j;
	for(;j>0;j--)
	printf("%s ",c[j]);
	printf("%s",c[0]);
}