main()
{
      int w;
      scanf("%d",&w);
      int m[13];
      m[0]=0;
      m[1]=31;
      m[2]=28;
      m[3]=31;
      m[4]=30;
      m[5]=31;
      m[6]=30;
      m[7]=31;
      m[8]=31;
      m[9]=30;
      m[10]=31;
      m[11]=30;
      m[12]=31;
      int s=0;int p=1;
      
      for(int j=1;j<13;j++)
         {    int s=0;
              for(int x=0;x<j;x++)
              {
                      s=s+m[x];
              }
              s=s+13;
              
              if(((s-1)%7+w%7)%7==5)
              { 
                printf("%d\n",j);
                
              }
              
         }
         
         
         
}
