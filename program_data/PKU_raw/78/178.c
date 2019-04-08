void sort(struct per a[],int n);
struct per
{
       char c;
       int w;
};
main()
{
      int flag=0,i;
      struct per p[4];
      p[0].c='z';
      p[1].c='q';
      p[2].c='s';
      p[3].c='l';
      for(p[0].w=10;p[0].w<=50;p[0].w+=10)
      {
           for(p[1].w=10;p[1].w<=50;p[1].w+=10)
           {
                 for(p[2].w=10;p[2].w<=50;p[2].w+=10)
                 {
                       for(p[3].w=10;p[3].w<=50;p[3].w+=10) 
                       {
                             if((p[0].w+p[1].w==p[2].w+p[3].w)&&(p[0].w+p[3].w>p[2].w+p[1].w)&&(p[0].w+p[2].w<p[1].w))
                             {
                                   flag=1;
                                   break;                             
                             }               
                       }
                       if(flag==1)
                             break;              
                 }
                 if(flag==1)
                       break;            
           }
           if(flag==1)
                 break;             
      }
      sort(p,4);
      for(i=0;i<4;i++)
      {
           printf("%c %d\n",p[i].c,p[i].w);           
      }
     
}

void sort(struct per a[],int n)
{
     int i,m,j;
     struct per temp;
     for(i=0;i<n;i++)
     {
          m=i;
          for(j=i+1;j<n;j++)
          {
                if(a[j].w>a[m].w)
                      m=j;            
          }   
          if(m!=i)
          {
                temp=a[i];
                a[i]=a[m];
                a[m]=temp;  
          }        
     }
}
