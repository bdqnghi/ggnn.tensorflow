int main()
{ 

struct point
    {
           char x[10];
           int y;
    }
    sz[100];
    struct po
    {
           char a[10];
           int b;
           int c;
    }
    lnr[100];
    int n,temp;
    int tag=0;
    char tem[100];
    int count=0;
  
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            scanf("%s%d",sz[i].x,&sz[i].y);
    }
    for(int j=0;j<n;j++)
    {
          for(int k=tag;k<n;k++)
          {
                  if(sz[k].y>=60)
                  {
                     lnr[j].c=k;
                     lnr[j].b=sz[k].y;
                     strcpy(lnr[j].a,sz[k].x);
                     tag=k+1;
                     count++;
                     break;
                  }
          }
          
    }
    for(int l=0;l<count-1;l++)
    {
            for(int m=count-1;m>l;m--)
            {
                    if(lnr[m].b>lnr[m-1].b)
                    {
                          temp=lnr[m-1].b;
                          lnr[m-1].b=lnr[m].b;
                          lnr[m].b=temp;
                          
                          strcpy(tem,lnr[m-1].a);
                          strcpy(lnr[m-1].a,lnr[m].a);
                          strcpy(lnr[m].a,tem);
                    }
            }
    } 
    tag=n-1;        
    for(int o=n-1;o>count-1;o--)
    {
           for(int p=tag;p>=0;p--)
           {
               if(sz[p].y<60)
               {
                             sz[o].y=sz[p].y;
                             strcpy(sz[o].x,sz[p].x);
                             tag=p-1;
                             break;
               }
           }
    }
    for(int q=0;q<count;q++)
    {
            printf("%s\n",lnr[q].a);
    }
    for(int r=count;r<n;r++)
    {
            printf("%s\n",sz[r].x);
    }
return 0;
}
                                                        
  