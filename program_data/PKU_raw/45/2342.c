void main()
{
	char a[50],b[50];
	int i,j,k,n=0,m,res=-1;
	scanf("%s %s",b,a);
	j=strlen(a);
	k=strlen(b);
	for(n=0;n<j-k+1;n++)
	{
		m=0;
		while((m<k)&&(b[m]==a[m+n]))m++;
	    if(m==k)
		{
			res=n;
			break;
		}
	}
	if(res!=-1)printf("%d",res);
}