void f(int a[100][100],int m,int p,int q)
{
   int n=0,i,j,w,*pt;
   w=(p+1)*(q+1);
   for(j=1;;j++)
   {
	   for(pt=&a[m][m];pt<=&a[m][p];pt++)
	   { printf("%d\n",*pt); n++;}
	   if(n==w) break;
	   for(i=m+1;i<=q;i++)
	   {printf("%d\n",*(*(a+i)+p));n++;}
	   if(n==w) break;
	   for(pt=&a[q][p-1];pt>=&a[q][m];pt--)
	   {printf("%d\n",*pt);n++;}
	   if(n==w) break;
	   for(i=q-1;i>=m+1;i--)
	   { printf("%d\n",*(*(a+i)+m));n++;}
	   if(n==w) break;
	   m++;
	   p--;
	   q--;
   }

}
void main()
{
	int row,col,i,j,a[100][100],m=0,p,q;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	p=col-1;
	q=row-1;
	f(a,m,p,q);
}