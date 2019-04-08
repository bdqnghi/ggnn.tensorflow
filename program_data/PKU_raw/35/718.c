int main()
{
       int a[7][7];
       int i,j,b,row,col,count1,k;
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
               b=a[i][0];
               for(j=0;j<m;j++)
               {
                       if(a[i][j]>=b)
                       {
                               b=a[i][j];
                               col=j;
                               count1=1;
                       }
               }
               for(k=0;k<n;k++)
               {
                       if(b>a[k][col])
                       {
                       count1=0;
                       continue;
                       }
               }
               if(count1==1)
			   {
				   printf("%d+%d",i,col);
				   break;
			   }
       }
       if(count1==0)printf("No");
       return 0;
}
