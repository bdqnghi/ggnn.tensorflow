void main()
{
	int m,j,i=0,p[300],n,y=0;
	 float k[300],b,a=0;
	scanf("%d",&n);
	for(m=0;m<n;m++) 
	{scanf("%d",&p[m]);
	a=a+p[m];}
	b=a/n;
   for(m=0;m<n;m++)
   {if(p[m]-b>=0)
   {k[m]=p[m]-b;}
   else
	   k[m]=b-p[m];}
	for(j=1;j<n;j++)
	{if(k[j]>k[i])
	i=j;}
	for(m=0;m<n;m++)
	{if(k[m]==k[i]&&p[m]<=b)
	  {printf("%d",p[m]);
	y=1;}}
	for(m=0;m<n;m++)
	{if(k[m]==k[i]&&p[m]>b)
	{if(y==1)
	  printf(",%d",p[m]);
	else
		printf("%d",p[m]);}
	}
}