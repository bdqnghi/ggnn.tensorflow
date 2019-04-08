void moin(char a[][100],char b[][100],int k)
{
	int c,d,e,f,i,j;
	char x[10][100];
	c=strlen(a[k]); d=strlen(b[k]); e=0;
	for(i=c-1;i>=c-d;i--)
	{f=(a[k][i]-48)-(b[k][i-c+d]-48)+e;
	 if(f>=0) e=0;
     else {e=-1;f=f+10;}
     x[k][i]=f+48;}
	for(i=c-d-1;i>=0;i--)
	{f=a[k][i]-48+e;
	 if(f>=0) e=0;
	 else {e=-1;f=f+10;}
     x[k][i]=f+48;}
	for(i=0;x[k][i]=='0';i++);
	for(j=i;j<=c-1;j++)
       printf("%c",x[k][j]);
	printf("\n");
}
int main()
{
   int n,i;
   char a[10][100],b[10][100];
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   {scanf("%s%s",a[i],b[i]); 
    printf("\n");}
    for(i=0;i<=n-1;i++)
	   moin(a,b,i);
   return(0);
}