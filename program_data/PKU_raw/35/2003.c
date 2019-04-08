void find(int x[100][100],int m,int n)
{
	int i,j,k,num,nam,all=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
             num=0;
			 nam=0;
		 for(k=0;k<n;k++)
		 {
			 if(x[i][k]>x[i][j])
              num++;
		 }
		 for(k=0;k<m;k++)
		 {
          if(x[k][j]<x[i][j])
			  nam++;
		 }
		 if(num==0&&nam==0)
		 {
			 printf("%d+%d\n",i,j);
		 all++;
		 }
		}
		if(all==0)
			printf("No");
}
void main( )
{    
   int as[100][100],i,j,a,b;
   char c;
//void find(*x,int m,int n)
   scanf("%d",&a);
   c=getchar();
   scanf("%d",&b);
   for(i=0;i<a;i++)
	   for(j=0;j<b;j++)
		   scanf("%d",&as[i][j]);
	   find(as,a,b);
}