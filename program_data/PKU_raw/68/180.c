
int main()
{
	int n,i,j,t,k,p=1,u=1,c,x,y;
    scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
	   for(j=3;j<=i/2;j++)
	   {
		   c=sqrt(j);
		   	   if(j%2==0)
			   {
				   goto loop;
			   }
		   for(k=3;k<=c;k++)
		   {
			   if(j%k==0)
				   goto loop;
		   }
			   x=i-j;
			   y=sqrt(x);
			      for(t=3;t<=y;t+=2)
				  {
				     if(x%2==0)
					 {
                        goto loop;
					 }
				     else if(x%t==0)
                        goto loop;
					 
				  }
					   printf("%d=%d+%d\n",i,j,x);
					   goto er;
		   loop:;
	   }
er:;
	}
	return 0;
}