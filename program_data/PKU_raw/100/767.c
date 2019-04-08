int charnum(char c, char m[]);
int main()
{
	char zifu[301];
	scanf ("%s",zifu);
	int j;
	int sum,no=0;
 	for (j=97;j<123;j++)
	{
	    sum=charnum((char)j,zifu);
		if (sum!=0)
		{
			printf ("%c=%d\n",j,sum);
			no++;
		}
	}
	
	if(no==0)
	{
		printf ("No");
	}
	return 0;
}

int charnum(char c, char m[])
{
	int len = strlen(m) ;
	int i,sum=0;
		for(i=0;i<len;i++)
		{
			if (m[i]==c)
			{
				sum ++ ;
			}
		}
	return sum;
}