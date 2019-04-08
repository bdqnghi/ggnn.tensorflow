int main()
{
	char a[500];
	int i,j,k,m;
	gets(a);
	int len=strlen(a);
	for(i=2;i<=len;i++)
	{
		for(j=0;j<=len-i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
					break;
			}
			if(k==i)
			{
				for(m=0;m<i;m++)
					putchar(a[j+m]);
				printf("\n");
			}
		}
	}
	return 0;
}