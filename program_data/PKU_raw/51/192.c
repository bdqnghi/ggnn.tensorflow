int main ()
{
	char a[500],b[250][5];
	char x;
	int c[250]={0};
	int n,i,j,k,l,m,y;
	scanf("%d%c",&n,&x);
	gets(a);
	k=strlen(a);
	for(i=0;i<=k-n;i++)
	{
		for(j=0;j<n;j++)
		b[i][j]=a[i+j];
	}
	for(i=0;i<=k-n;i++)
		for(j=i+1;j<=k-n;j++)
		{
			if(b[i][0]!='\0')
			{
				y=0;
				for(m=0;m<n;m++)
					if(b[i][m]!=b[j][m]) y++;
				if(y==0)
				{
				c[i]=c[i]+1;
				b[j][0]='\0';
				}
			}
		}
	l=c[0]+1;
	for(i=0;i<k-n;i++)
		if(c[i]>l-1) l=c[i]+1;
	if(l==1) printf("NO");
	else
	{
		printf("%d\n",l);
	for(i=0;i<=k-n;i++)
	{
		if(c[i]==l-1)
		{
			for(j=0;j<n;j++)
				printf("%c",b[i][j]);
			printf("\n");
		}
	}
	}
}

         
	