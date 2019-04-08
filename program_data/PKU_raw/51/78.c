
int main()
{
	int i,n,m,j,k,b[501],d,max,h;
    char a[501],c[501][10];

scanf("%d",&n);
getchar();
gets(a);
m=strlen(a);
for(i=0;i<m-n+1;i++)
{

	b[i]=0;
	for(j=0;j<n;j++)
	{
		c[i][j]=a[i+j];
	}
	
	for(j=0;j<m-n+1;j++)
	{
		d=0;
		for(k=0;k<n;k++)
		{
			if(c[i][k]!=a[j+k])
			{continue;}else
			{d++;}
		}
		if(d==n)
		{
			b[i]++;
		}
	}
}			

max=0;
for(i=0;i<m+1-n;i++)
{
	if(b[i]==1)
	{b[i]=0;}
	if(b[i]>max)
	{
		max=b[i];
	}
}
if(max!=0)
printf("%d\n",max);
for(i=0;i<m+1-n;i++)
{
     if(b[i]==max&&max!=0)
	 {
		 h=0;
		 for(j=0;j<i;j++)
		 {
			 d=0;
			 for(k=0;k<n;k++)
			 {
				 if(c[i][k]==c[j][k])
				 {
					 d++;
				 }
			 }
			 if(d==n)
			 {
				 h=1;
			 }
		 }
		 if(h==1)
		 {continue;}
		 for(j=0;j<n-1;j++)
		 {
			 printf("%c",c[i][j]);
		 }
		 printf("%c\n",c[i][n-1]);
	 } 
}
 if(max==0)
	 {
		 printf("NO");
	 }
return 0;
}

 
 
 
