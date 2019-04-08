main()
{
int num,i,j,k,l,len[20];
char a[20][101],b[50][101]={' '};
scanf ("%d",&num);
for (i=1;i<=num;i++) 
{
scanf("%s",a[i]);len[i]=strlen(a[i]);
}
//==2é?í1==== 

for (k=1;k<=num;k++)
{
	for (i=0;i<len[k];i++)
	{
		if (a[k][i]=='(') b[k][i]='$';
		else if (a[k][i]==')') b[k][i]='?';
		else b[k][i]=' ';
	}
	for (i=0;i<len[k]-1;i++)
	{
		if (b[k][i]=='$')
		{
			for (j=i+1;j<len[k];j++)
			{
				if (b[k][j]=='?')
				{
					for (l=j-1;l>=i;l--)
					{
						if (b[k][l]=='$')
						{
							b[k][l]=' ';b[k][j]=' ';break;
						}
					}
				}
			}
		}
	}
	

for (i=0;i<len[k];i++) printf ("%c",a[k][i]);
	printf ("\n");
for (i=0;i<len[k];i++) printf ("%c",b[k][i]);
	printf ("\n");
	
	
	
} 




}