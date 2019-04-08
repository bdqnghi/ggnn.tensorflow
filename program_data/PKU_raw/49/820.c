int ju(char str[],int j,int k)
{
	int p,m=1;
	for(p=k;p<=k+j-1;p++)
	{
		if(str[p]!=str[2*k+j-1-p])
		{
			m=0;
		}
	}
	return m;
}
void main()
{
	char str[501];
	char c;
	int i=1,j,k,l;
	while((c=getchar())!='\n')
	{
		str[i]=c;
		i++;
	}
	i--;
	for(j=2;j<=i;j++)
	{
		for(k=1;k<=i-1;k++)
		{
			if(ju(str,j,k)==1)
			{
				for(l=k;l<=k+j-1;l++)
					printf("%c",str[l]);
				printf("\n");
			}
		}
	}
}