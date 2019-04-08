struct ren
{
       char name;
       int w;
}a[4];
main()
{
      a[0].name='z';
      a[1].name='q';
      a[2].name='s';
      a[3].name='l';
      int i,j,k,h,b=0,t;
      char T;
      for(i=5;i>2;i--)
      {        
            for(j=1;j<i;j++)
            {
                   for(k=1;k<i-j;k++)
                   {
                       for(h=1;h<=5;h++)
                       {
                            if((i+j==k+h)&&(j+h>i+k))
                             {b=1;break;}           
                       }
                       if(b==1) break;              
                   } 
                   if(b==1) break;        
            } 
            if(b==1) break;         
      }
      a[1].w=i;
      a[0].w=j;
      a[2].w=k;
      a[3].w=h;
      for(int g=0;g<4;g++)
      {
            for(int f=g+1;f<4;f++)
            {
                    if(a[f].w>a[g].w)
                    {
                       t=a[f].w;
                       a[f].w=a[g].w; 
                       a[g].w=t; 
                       T=a[f].name;
                       a[f].name=a[g].name; 
                       a[g].name=T;            
                    }  
            }
            printf("%c %d\n",a[g].name,a[g].w*10);
      }
      getchar();
      getchar();
      
}
