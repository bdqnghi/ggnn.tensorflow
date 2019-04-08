void main()
{
	char c,s[2000]={'0'},d;
	unsigned  int a[301]={0},i,j=0,m=1,n=1,max,t,z=0,q=0;
	gets(s);
	for(i=0;(c=s[i])!='\0';i++)
	if((c=s[i])==',')n++;
	for(i=0;(c=s[i])!='\0';i++)
	{
		if((d=s[i])==','){m=1;j++;continue;}
		else 
		{
			a[j]=s[i]-'0'+a[j]*10;}}
	
	
		

		for(i=0;i<=n-1;i++)
		{max=i;
			for(j=i;j<=n;j++)
         if(a[j]>a[max])max=j;
		 t=a[max];a[max]=a[i];a[i]=t;
		}

for(i=1;i<n;i++)
if(a[i]<a[0]){printf("%d\n",a[i]);q=1;break;}
if(q==0)printf("No\n");

}