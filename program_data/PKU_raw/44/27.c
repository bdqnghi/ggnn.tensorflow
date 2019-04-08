int num(int n)
{int c,x,y,i,j,a[100],k,nu;j=0;nu=0;

if(n>0)nu=1;if(n<0){nu=-1;n=n*nu;}
y=log10(n);
for(i=y;i>=0;i--){x=n/(pow(10,i));a[j]=x;j++;n=n-x*pow(10,i);}
k=0;j=0;x=0;
for(i=0;i<=y;i++){k=k+a[i]*pow(10,x);x++;}
return (k*nu);
}







int main()
{int l,m;
 for(l=0;scanf("%d",&m)==1;l++)
	{ 
	 printf("%d\n",num(m));}
return 0;}