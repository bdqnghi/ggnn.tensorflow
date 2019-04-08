int empty(int n,int m)
{
    int k;
    if(m==n)
    {
            if(n==1) k=1;
            else k=1+empty(n-1,m);
    }
    if(m>n)
    {
           if(n==1) k=1;
           else k=empty(n-1,m)+empty(n,m-n);
    }
    if(m<n) k=empty(m,m);
    return k;
}
int main()
{
	      int i,t,a,b,c;
	      scanf("%d",&t);
	      for(i=0;i<t;i++)
	      {
                          scanf("%d %d",&a,&b);
                          c=empty(b,a);
                          printf("%d\n",c);
          }
}
