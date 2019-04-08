int main()
{
	char a[500];
	int i,j,k,x;
	gets(a);
	//i?????????
	for(i=2;i<=strlen(a);i++)
	{
		//j?????????
		for(j=0;j<=(strlen(a)-i);j++)
		{
			x=0;
			for(k=0;k<i;k++)
			{
				if(a[j+k]!=a[j+i-1-k])
				{
					x=1;
					break;
				}
			}
			if(x==0)
			{
				for(k=j;k<j+i;k++)
					printf("%c",a[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
