int main(){
    int m,n,i,j,a[100000]={0},w[10000],z=0,s=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
     {
        for(j=2;j<i;j++)
          {
              if(i%j==0)
              { a[i]++;
                  break;
               }
            }
      }
   for(i=m;i<=n;i++)
    {
       if(a[i]==0)
       {   int k,b,c=0;
		   k=i;
		   while(k>0)
		   {
		   b=k%10;
		   
		   k=k/10;
		    c=c*10+b;
		   }
		   if(c==i)
		   {
			 z=z+1;
		     w[z]=c;
			 s=s+1;

		   }
		   else continue;
	  }
   }
   if(z==0)
	   printf("no");
   else
   {
   for(z=1;z<s;z++)
     {	  
			   printf("%d,",w[z]);
   }
  printf("%d",w[s]);
   }
return 0;
}

