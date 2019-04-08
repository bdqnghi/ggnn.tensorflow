main()
{
struct stdudent
{
       int ID;
       int a;
       int b;
       int c;
       
       }d[100000];
       int first,second,third;
       int n,i,j;
       int w,h,l;
       int k; 
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
                       scanf("%d %d %d",&d[i].ID,&d[i].a,&d[i].b);
                       d[i].c=d[i].a+d[i].b;
       
                       }
                       first=0;
                       second=1;
                       third=2;
                       w=d[0].c;
                       h=d[1].c;
                       l=d[2].c;
                       if(w<h&&(h>l))
                       {
                       first=1;
                       if(w>l)
                       {
                       second=0;
                       third=2;
                       }
                       else
                       {
                       second=2;
                       third=0;
                       }
                       }
                       else if(l>w)
                       {
                         first=2;
                         if(w>h)
                         {
                                second=0;
                                third=1;
                                } 
                                else
                                third=0;
                                 
                        }
                              
                       
                       for(j=3;j<n;j++)
                       {
                       k=d[j].c;
                       w=d[first].c;
                       h=d[second].c;
                       l=d[third].c;
                       if(k>w)
                       {
                       third=second;
                       second=first;
                       first=j;
                       }
                       else if(k>h)
                       {
                            third=second;
                            second=j;
                        }
                        else if(k>l)
                        third=j;
                                       }
printf("%d %d\n",d[first].ID,d[first].c);
printf("%d %d\n",d[second].ID,d[second].c);
printf("%d %d\n",d[third].ID,d[third].c);         
  getchar();
  getchar();                     
      }
