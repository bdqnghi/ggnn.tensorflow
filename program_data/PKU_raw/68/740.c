void main()
{
   int n,i,j,k,h;
   double a,b;
   scanf("%d",&n);
   for(i=6;i<=n;i=i+2)
   { 
	 for(j=3;j<i-2;j=j+2)
     { a=sqrt(j);
       for(k=3;k<=a;k=k+2)
       {  if(j%k==0)break;
	   }
	   if(k>a)
        h=i-j;
        b=sqrt(h);
        for(k=3;k<=b;k=k+2)
        { if(h%k==0)break;
		}
	   if(k>b)break;
	 }
     printf("%d=%d+%d\n",i,j,h);
   }   
}