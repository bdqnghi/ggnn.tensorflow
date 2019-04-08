int main()
{
 	 int f(int a,int b);
 	 int i,t,n,m;
 	 scanf("%d",&t);
 	 while(t--)
	 {
		 scanf("%d%d",&m,&n);
		 printf("%d\n",f(m,n));
	 }
	 
}
		 
int f(int m,int n)
{
 	 if(m==0||n==1) return 1;
     else if(n>m) return f(m,m);
     else return f(m,n-1)+f(m-n,n);
}
