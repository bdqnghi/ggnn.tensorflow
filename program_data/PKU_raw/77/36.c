void ou(char x[], int n,char c, char d)
{

	int i,j;
	
	for(i=0;i<n;i++)
	{
		if(x[i]==d)
		{
			for(j=i-1;j>=0;j--)
			{
				if(x[j]==c)
				{
					printf("%d %d\n",j,i);
					x[i]='4';
					x[j]='4';
					break;
				}
			}
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(x[i]!='4')
		{
			ou(x,n,c,d);
		}
	}
}
int main()
{
	int i,n;
	char x[1000],c,d;
	scanf("%s",x);
	c=x[0];
	n=strlen(x);
	for(i=0;i<n-1;i++)
	{	if(x[i]!=c)
		{
			d=x[i];
		}
	}

	ou(x,n,c,d);
	return 0;

}