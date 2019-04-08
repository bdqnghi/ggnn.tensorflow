int main()
{
       int a[8][8];
       int i,j,b,col,count1=0;
       int m,n;
       scanf("%d",&n);
       scanf(",");
       scanf("%d",&m);
       for(i=0;i<n;i++)
       {
               for(j=0;j<m;j++)
               {
                       scanf("%d",&(a[i][j]));
               }
       }
       for(i=0;i<n;i++)
       {
		   col=0;
               b=a[i][0];
               for(j=0;j<m;j++)
               {
                       if(a[i][j]>b)
                       {
                               b=a[i][j];
                               col=j;
                       }
               }
               for(j=0;j<n;j++)
               {
                       if(b>a[j][col])
                       {
                    
                       break;
                       }
               }
               if(j==n){
				   printf("%d+%d",i,col);
				   count1=1;
				   break;
			   }
       }
       if(count1==0)printf("No");
       return 0;
}
