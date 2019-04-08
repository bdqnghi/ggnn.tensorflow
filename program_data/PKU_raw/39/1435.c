
void main()
{   int i,n,b[100]={0},c[100]={0},f[100]={0},s[100]={0},v,k=0,max=0;
    char a[100][21]={'\0'},d[100],e[100];
   

    scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s %d %d %c %c %d",a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);}
	for(i=0;i<n;i++)
	{
		if(b[i]>80 && f[i]>0)
		{s[i]=s[i]+8000;}
		if(b[i]>85 && c[i]>80)
		{s[i]=s[i]+4000;}
		if(b[i]>90)
		{s[i]=s[i]+2000;}
		if(b[i]>85 && e[i]=='Y')
		{s[i]=s[i]+1000;}
		if(c[i]>80 && d[i]=='Y')
		{s[i]=s[i]+850;}
		k=k+s[i];
		if(s[i]>max)
		{v=i;
		 max=s[i];
		}
	}
	printf("%s\n",a[v]);
	printf("%d\n",s[v]);
	printf("%d\n",k);


	


}

