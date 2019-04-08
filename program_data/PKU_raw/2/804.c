void main()
{
	int n,i,j,l,a[100],b[26],s,max;
	char c[100][50],m;
	for(i=0;i<=25;i++)
		b[i]=0;
	scanf("%d",&n);

    for(i=0;i<=n-1;i++)
	{
		scanf("%d%s",&a[i],c[i]);
	   l=strlen(c[i]);
	    for(j=0;j<=l-1;j++)
		{s=(int)c[i][j]-65;
		b[s]=b[s]+1;}}
	
	max=b[0];
	j=0;

   for(i=0;i<=25;i++)
   {  if(b[i]>max)
   {max=b[i];
   j=i;}}
   m=j+65;

   printf("%c\n",m);
   printf("%d\n",max);

    for(i=0;i<=n-1;i++)
	{  l=strlen(c[i]);
	    for(j=0;j<=l-1;j++)
		if(c[i][j]==m)
			printf("%d\n",a[i]);
	}
}




	


	
	
	
