void main()
{
int flag(char x[100],char y[100]);
char stro[100],strt[100];
int f;
scanf("%s%s",stro,strt);
f=flag(stro,strt);
if(f==0)
printf("YES");
else
printf("NO");
}

int flag(char x[100],char y[100])
{
	int i,j,c,m,n;
	m=strlen(x);
	n=strlen(y);
	if(m!=n)
		c=1;
	else
	{
		for(i=0,c=m;i<m;i++)
			for(j=0;j<n;j++)
				if(x[i]==y[j])
				{
					x[i]=0;
					y[j]=0;
					c--;
					break;
				}
				}
	return(c);
}
