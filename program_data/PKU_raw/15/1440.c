int main()
{
   int s[1000][1000],n,i,j;
   scanf("%d",&n);
   int a=0,b=0,c=0,d=0,m;
   for(i=0;i<n;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   scanf("%d",&s[i][j]);
	   }
   }
   for(i=0;i<n;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   if(s[i][j]==0)
		   {
			   a=i;
			   b=j;
			   break;
		   }
		   
	   }
	   if(a!=0&&b!=0)
		   break;
	  
   }
   for(i=n-1;i>=0;i--)
   {
	   for(j=n-1;j>=0;j--)
	   {
		   if(s[i][j]==0)
		   {
			   c=i;
			   d=j;
			   break;
		   }
		   
	   }
	   if(c!=0&&d!=0)
		   break;
	  
	   
   }
   m=(d-b-1)*(c-a-1);
   printf("%d",m);
   return 0;
}



		   
   