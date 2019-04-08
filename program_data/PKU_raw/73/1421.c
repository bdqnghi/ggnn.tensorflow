int maxi(int b,int c,int d,int e,int f);
int mini(int b,int c,int d,int e,int f);
int main()
{
	int a[5][5],m,n,sum=0;
	for(m=0;m<5;m++)
     {
		for(n=0;n<5;n++)
		{	
			scanf("%d",&a[m][n]);
		}
     
     }
     for(m=0;m<5;m++)
     {
		for (n=0;n<5;n++)
		{
			if((a[m][n]==maxi(a[m][0],a[m][1],a[m][2],a[m][3],a[m][4]))&&(a[m][n]==mini(a[0][n],a[1][n],a[2][n],a[3][n],a[4][n])))
			{
				printf("%d %d %d\n",m+1,n+1,a[m][n]);
				sum++;
			}
				
		}	
	}
	if(sum==0)
	printf("not found");
     return 0;
}
  
int maxi(int b,int c,int d,int e,int f)
{
	if(b>c)
	c=b;
	if(c>d)
	d=c;
	if(d>e)
	e=d;
	if(e>f)
	f=e;
	return f;
		} 
int mini(int b,int c,int d,int e,int f)
{
	if(b<c)
	c=b;
	if(c<d)
	d=c;
	if(d<e)
	e=d;
	if(e<f)
	f=e;
	return f;
		} 