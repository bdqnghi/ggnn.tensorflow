main()
{
      int row,col;
      int i,j,k,s,p,q;
      int a[100][100];
      scanf("%d%d",&row,&col);
      int temp_r,temp_c;
      for(p=0;p<row;p++)
      {
          for(q=0;q<col;q++)
          {
              scanf("%d",&a[p][q]);
          }
      }
      for(i=0;i<col;i++)
      {
          temp_r=0;temp_c=i;
          while(temp_r>=0&&temp_r<row&&temp_c>=0&&temp_c<col)
          {
              printf("%d\n",a[temp_r][temp_c]);
              temp_r++;
              temp_c--;
          }
      }
      for(j=1;j<row;j++)
      {
          temp_r=j;temp_c=col-1;
          while(temp_r>=0&&temp_r<row&&temp_c>=0&&temp_c<col)
          {
              printf("%d\n",a[temp_r][temp_c]);
              temp_r++;
              temp_c--;
          }
      }
      getchar();
      getchar();
      
}
