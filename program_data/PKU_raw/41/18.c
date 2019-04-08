int main()
{
    int rank[5];
    int i;
    int judge[6]={0};
    for(rank[0]=1;rank[0]<=5;rank[0]++)
       for(rank[1]=1;rank[1]<=5;rank[1]++)
          {if(rank[1]==rank[0])continue;
          for(rank[2]=1;rank[2]<=5;rank[2]++)
             {if(rank[2]==rank[1]||rank[2]==rank[0])continue;
             for(rank[3]=1;rank[3]<=5;rank[3]++)
             {if(rank[3]==rank[2]||rank[3]==rank[1]||rank[3]==rank[0])continue;
              rank[4]=15-rank[0]-rank[1]-rank[2]-rank[3];
              if(rank[4]==2||rank[4]==3)continue;
              else
              {
                  judge[rank[0]]=(rank[4]==1);
                  judge[rank[1]]=(rank[1]==2);
                  judge[rank[2]]=(rank[0]==5);
                  judge[rank[3]]=(rank[2]!=1);
                  judge[rank[4]]=(rank[3]==1);
                  if((judge[1]==1)&&(judge[2]==1)&&(judge[3]==0)&&(judge[4]==0)&&(judge[5]==0))
                  {for(i=0;i<4;i++)
                  {cout<<rank[i]<<" ";}
                  cout<<rank[4];}
              }
          }}}
    cin>>i;
    return 0;
}
