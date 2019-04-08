main()
{
      int num,day,a[9][9],b[9][9],i,j,k,h,s;
      for(i=0;i<9;i++)
      for(j=0;j<9;j++)
      a[i][j]=0;
      scanf("%d%d",&num,&day);
      a[4][4]=num;
      for(i=0;i<day;i++)
      {
      for(k=0;k<2*i+3;k++)
      for(j=0;j<2*i+3;j++)
      b[3-i+k][3-i+j]=0; 
                    
      for(k=0;k<2*i+1;k++)
      for(j=0;j<2*i+1;j++)
      for(h=-1;h<2;h++)
      for(s=-1;s<2;s++)
      b[4-i+k+h][4-i+j+s]= b[4-i+k+h][4-i+j+s]+a[4-i+k][4-i+j];
      
      for(k=0;k<2*i+3;k++)
      for(j=0;j<2*i+3;j++)
      a[3-i+k][3-i+j]= b[3-i+k][3-i+j]+a[3-i+k][3-i+j];
      }
      for(i=0;i<9;i++)
      for(j=0;j<9;j++)
      {if(j==8)
      printf("%d\n",a[i][j]);
      else
      printf("%d ",a[i][j]);
      }
      
}
      
      
