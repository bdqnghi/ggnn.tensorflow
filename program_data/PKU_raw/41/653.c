int main()
{   int a,b,c,d,e;
    int rank[6]={0,0,0,0,0};
   for(a=1;a<=5;a++)
       for(b=1;b<=5;b++)
           for(c=1;c<=5;c++)
               for(d=1;d<=5;d++)
                  for(e=1;e<=5;e++)
                     { if(a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e)   continue;
                       if(e==2||e==3)  continue;
                         rank[a]=(e==1);
                         rank[b]=(b==2);
                         rank[c]=(a==5);
                         rank[d]=(c!=1);
                         rank[e]=(d==1);
                         if(rank[1]==1&&rank[2]==1&&rank[3]==0&&rank[4]==0&&rank[5]==0)
                         {cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
                         }
                     }
                         
                         
    return 0;
}