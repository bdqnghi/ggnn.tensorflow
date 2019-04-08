int main()
{
	char a[100000],b[10000][3],c[10];
	int i,j,k,l,n,s;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",a);
		
		for(j=0;j<=strlen(a)-1;j++)
		{
			s=0;
			c[0]=a[j];

			c[1]='\0';
			
			for(k=0;k<=strlen(a)-1;k++)
			{
				if(a[k]==c[0])
					s++;
			}
			
			if(s==1)
			{
				b[i][0]=c[0];
				b[i][1]='\0';
				
				break;
			}
			if(j==strlen(a)-1)
			{
				b[i][0]='n';
				b[i][1]='o';
				b[i][2]='\0';
			}
		}
	}
	for(j=0;j<=n-1;j++)
	{
		printf("%s\n",b[j]);
	}
	return 0;
}