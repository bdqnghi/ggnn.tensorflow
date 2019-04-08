int main()
{
	typedef  struct {
        int a[3];
        int b[3];
        float dis;
	} juli;
   int n,m=0,i,j,k,x,y;
   scanf("%d",&n);
   int c[10][3];
   for(i=0;i<n;i++)
   scanf("%d %d %d",&c[i][0],&c[i][1],&c[i][2]);
   juli d[50];
   juli temp;
   for(i=0;i<n-1;i++)
    {for(j=i+1;j<n;j++)
    {
   	    x=0;
   	   for(k=0;k<3;k++)
   	   {
   	   	d[m].a[k]=c[i][k];
   	   	d[m].b[k]=c[j][k];
   	   	x+=(c[i][k]-c[j][k])*(c[i][k]-c[j][k]);
   	   }
   	   d[m].dis=sqrt(fabs(x));
   	   m++;
    }}
    k=m;
   for(;m;m--)
   {
   	for(i=0;i<m-1;i++)
   	{
	   	if(d[i].dis<d[i+1].dis)
	   	{
	   		temp=d[i];
	   		d[i]=d[i+1];
	   		d[i+1]=temp;
	   	}
    }
   }
   for(i=0;i<k;i++)
   {
   	printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",d[i].a[0],d[i].a[1],d[i].a[2],d[i].b[0],d[i].b[1],d[i].b[2],d[i].dis);
   }
  }