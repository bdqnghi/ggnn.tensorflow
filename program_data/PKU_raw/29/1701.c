double cal(int i,int n,double x)
{ double s;
  if (i==n)  return x;
  else{ s=1+1/cal(i+1,n,x);return s;}//1+1/cal(i+1,n,x);
}
int main()
{
	

	double x;int i,j,k,l, m,n,y;
   scanf("%d",&m);
   for (i=1;i<=m;i++)
   {scanf("%d",&y);
    x=0;for (j=0;j<=y-1;j++) x+=cal(0,j,2.0);
	printf("%.3lf\n",x);}

 
}
