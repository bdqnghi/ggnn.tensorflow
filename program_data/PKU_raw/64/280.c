int main()
{
    struct position
    {int x1;
     int x2;
     int x3;
     }pos[10];
    struct distance
    {int x;
     int y;
     float distan;
     }dis[60],temp;//x??????y??????distan???
     int n,i,j,k;
     cin>>n;
     for(i=0;i<n;i++)
       {cin>>pos[i].x1;
        cin>>pos[i].x2;
        cin>>pos[i].x3;
        }//????
     k=0;
     for(i=0;i<n;i++)
       {for(j=i+1;j<n;j++)
          {dis[k].x=i;
           dis[k].y=j;
           dis[k].distan=sqrt((pos[i].x1-pos[j].x1)*(pos[i].x1-pos[j].x1)+(pos[i].x2-pos[j].x2)*(pos[i].x2-pos[j].x2)+(pos[i].x3-pos[j].x3)*(pos[i].x3-pos[j].x3));
           k++;}//????????????x,y,?????
       }
     for(i=0;i<k;i++)
       {for(j=0;j<k-1-i;j++)
          {if(dis[j].distan<dis[j+1].distan)
             {temp=dis[j];
              dis[j]=dis[j+1];
              dis[j+1]=temp;
              }//??????????????
          }
       }
       for(i=0;i<k;i++)
         cout<<"("<<pos[dis[i].x].x1<<","<<pos[dis[i].x].x2<<","<<pos[dis[i].x].x3<<")-("<<pos[dis[i].y].x1<<","<<pos[dis[i].y].x2<<","<<pos[dis[i].y].x3<<")="<<fixed<<setprecision(2)<<dis[i].distan<<endl;//?????
       return 0;
}