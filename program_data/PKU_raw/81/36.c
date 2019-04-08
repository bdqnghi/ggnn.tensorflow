main()
{
      int base[5][5]={0};
      int tem[5]={0};
      int i,j,a,b;
      for(i=0;i<5;i++)
          for(j=0;j<5;j++)
              scanf("%d",&base[i][j]);
      scanf("%d%d",&a,&b);
      if(a<0||a>4||b<0||b>4)
          printf("error");
      else
      {
          for(i=0;i<5;i++)
              tem[i]=base[a][i];
          for(i=0;i<5;i++)
              base[a][i]=base[b][i]; 
          for(i=0;i<5;i++)
              base[b][i]=tem[i];
      
          for(i=0;i<5;i++)
          {  
              for(j=0;j<4;j++)
                  printf("%d ",base[i][j]);
              printf("%d\n",base[i][4])  ;  
          }
       }
}
