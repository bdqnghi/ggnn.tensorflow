

int main()
{
   int n,k;
   scanf("%d%d",&n,&k);
   int sz[N];
   int i,m=0,h=0;
  
   for(i=0;i<n;i++)
   {
	   scanf("%d",&sz[i]);
   }
   int j;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
	   {
		   if(sz[i]+sz[j]==k)
		   {
			   printf("yes\n");
			   h=1;
			   break;
		   }
		   else 
		   {
			   m++;
		   }
		  
	   } 
	   if(m==n*(n-1)/2)
		   {
			   printf("no\n");
		   }
	   if(h==1){break;}
   }
	return 0;
}

