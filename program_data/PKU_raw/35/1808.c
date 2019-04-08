int main()
{
int m,n,a[8][8],i,j,p,q,b,k,c=1;
scanf("%d,%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{
	b=a[i][0];
	for(j=0;j<n;j++)
	   if(a[i][j]>=b)
	   {
		   b=a[i][j];
		   p=i;
		   q=j;
	   }
	for(k=0;k<m;k++)
		if(a[p][q]>a[k][q])
		b=0;
	if(b!=0)
    {
		printf("%d+%d",p,q);
		c=0;
	}

} 
if(c) printf("No");
return 0;
}


