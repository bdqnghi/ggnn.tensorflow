int main()
{
	int i,j,k,n,flag,m;
	flag=0;
	char str[500];
	gets(str);
	n=strlen(str);
	char *p;
	for(i=2;i<=n;i++)
	{
			p=str;
			for(j=0;j<=n-i;j++)
			{
				for(k=j;k<(j+j+i)/2;k++)
				{
					if(str[k]==str[j+j+i-1-k])
						flag=1;
					else
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					for(m=j;m<=j+i-1;m++)
					{
						printf("%c",str[m]);
					}
					printf("\n");
				}
			}
	}
}



	