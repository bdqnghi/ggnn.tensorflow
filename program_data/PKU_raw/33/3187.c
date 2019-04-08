int main()
{
	int n,i,j,k,len,sum=0;
	char a[300],b[300];
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
		  {
	if(a[i]=='A')
		a[i]='T' ;
	else if(a[i]=='T')
		a[i]='A' ;
		else if(a[i]=='C')
		a[i]='G' ;
			else if(a[i]=='G')
		a[i]='C' ;
		}
		printf("%s\n",a);
}
	return 0;
}