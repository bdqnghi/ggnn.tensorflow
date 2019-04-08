int main()
{
int suffix(char a[]);
char a[50][32];
int n,i,l,j,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",a[i]);
p=suffix(a[i]);
l=strlen(a[i]);
for(j=0;j<l-p;j++)printf("%c",a[i][j]);
printf("\n");
}
}
int suffix(char a[])
{
	int l,p;
	l=strlen(a);
	switch(a[l-1])
	{case 'g':p=3;break;
	 case 'r':p=2;break;
	 default :p=2;}
	return(p);
}