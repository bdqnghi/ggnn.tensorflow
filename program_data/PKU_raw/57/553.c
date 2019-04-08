void main()
{
int n,i,j,d,k;
char a[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s",a[i]);
}

for(i=0;i<n;i++)
{
	j=strlen(a[i]);
    
    if(a[i][j-1]=='g')
	{
		for(k=0;k<j-3;k++)
		{
			printf("%c",a[i][k]);
		}
		 printf("\n");
	}
	else
	{
       		for(k=0;k<j-2;k++)
		{
			printf("%c",a[i][k]);
		}
		 printf("\n");
	}
}
}