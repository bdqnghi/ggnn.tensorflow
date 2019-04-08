int main()
{
	char a[505];
	int i,j,k;
	gets(a);
	for(i=2;i<strlen(a);i++)
		for(j=0;j<=strlen(a)-i;j++)
		{
			for(k=0;k<i;k++)
				if(a[k+j]!=a[i+j-1-k]) break;
			if(k==i)
			{
				for(k=j;k<i+j;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
	return 0;
}