int main(int argc, char* argv[])
{
	
 int A[1000][1000],n,i,j;
 int a1,a2,b1,b2;
 a1=a2=b1=b2=0;
 int s;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
     scanf("%d",&A[i][j]);
   }
 }
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
     if(A[i][j]==0)
     {
       a1=i;
       b1=j;
       break;
     }
   }
   if(A[a1][b1]==0)
   {
	   break;
   }
   
  }
 for(i=n-1;i>=0;i--)
 {
   for(j=n-1;j>=0;j--)
   {
     if(A[i][j]==0)
     {
       a2=i;  
       b2=j;
       break; 
     }
   }
   if(A[a2][b2]==0)
   {
	   break;
   }
   
  }
 s=(a2-a1-1)*(b2-b1-1);
 printf("\n%d\n",s);
 return 0;
}


