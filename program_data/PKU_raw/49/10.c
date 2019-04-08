void main()
{
	int n,i,j,l,k,m;
	char a[500];
	gets(a);
	n=strlen(a);
	for(m=2;m<=n;m++)
	{		
    	for(i=0;i<n;i++)
		{
		   k=i;
		   char b[500]={0},c[500]={0};
		   for(j=0,k=i;j<m;j++,k++)
		   {
			    b[j]=a[k];
		        c[m-1-j]=a[k];
		   }
		   if(strcmp(b,c)==0)
			  printf("%s\n",b);
		}
	}
}