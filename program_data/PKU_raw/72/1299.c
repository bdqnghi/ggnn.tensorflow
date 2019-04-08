int a[105][105];
int main()
{
  int m,n,t;
  int i,j;
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
		  scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	  {
		  t=0;
	    if(a[i][j]>=a[i+1][j] || i+1>=m)
			t++;
		if(a[i][j]>=a[i][j+1] || j+1>=n)
			t++;
		if(a[i][j]>=a[i-1][j] || i-1<0)
			t++;
		if(a[i][j]>=a[i][j-1] || j-1<0)
			t++;
		if(t==4)
			printf("%d %d\n",i,j);
	  
	  }
 return 0;

}
