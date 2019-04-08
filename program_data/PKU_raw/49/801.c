int main()
{
	char a[2000];
	int i,j,k,c;
	for(i=0;i<=500;i++)
		a[i]='\0';
	gets(a);
	for(i=2;i<=500;i=i+2)
		for(j=0;j<=500;j++)
		{
			if(a[j]!='\0')
			{
				c=1;
				for(k=0;k<=i/2;k++)
				{
					if(a[j+k]!=a[j+i-k-1])
					{
						c=0;
						break;
					}
				}
			}
			if(c==1)
			{
				for(k=j;k<=j+i-1;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
	return 0;
}