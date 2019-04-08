
void main()
{
   int i,j,t=0,n=0,m,ii=0,jj=0,p=0;
   int c[5][5];
   for(i=0;i<5;i++)
   {
       for (j=0;j<5;j++)
       scanf("%d",&c[i][j]);
   }
      for(i=0;i<5;i++)
      {
          for(j=1,t=c[i][0];j<5;j++)
          if(t<c[i][j]) t=c[i][j];
          for(j=0;j<5;j++)
          {
              if(c[i][j]==t)
              {ii=i+1;jj=j+1;break;}
          }
          for(p=0,m=0;p<5;p++)
          if(t<=c[p][j]) m++;
          if(m==5) printf("%d %d %d",ii,jj,t);
          else n++;
          if(n==5) printf("not found");
      }
}

