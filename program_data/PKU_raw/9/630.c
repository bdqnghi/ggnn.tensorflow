

int main()
{
    int renshu,nianling[1000][2],bijiao[1000][2];
    char id[1000][1000];
        
    scanf("%d",&renshu);
    
    int i,j,k;
    j=0;
    k=0;
    for(i=0;i<renshu;i++)
   {
    scanf("%s%d",id[i],&nianling[i][0]);
    }
    
    
    for(i=0;i<renshu;i++)
    {
        if(nianling[i][0]<60);
        else
        {
        nianling[i][1]=i;
        bijiao[k][0]=nianling[i][0];
        bijiao[k][1]=i;
        k++;
        }
    }
    
   int zhongjian[2],l;
   l=k;
   bijiao[l][0]=10000;
   
    for(i=0;i<l;i++)
    {
       for(j=0;j<l;j++)
       {
           if(bijiao[j][0]>bijiao[j+1][0])
           {
              zhongjian[0]=bijiao[j+1][0];
              zhongjian[1]=bijiao[j+1][1];
              bijiao[j+1][0]=bijiao[j][0];
              bijiao[j+1][1]=bijiao[j][1];
              bijiao[j][0]=zhongjian[0];
              bijiao[j][1]=zhongjian[1];
           }
           else if(bijiao[j][0]==bijiao[j+1][0]&&bijiao[j][1]<bijiao[j+1][1])
           {
              zhongjian[0]=bijiao[j+1][0];
              zhongjian[1]=bijiao[j+1][1];
              bijiao[j+1][0]=bijiao[j][0];
              bijiao[j+1][1]=bijiao[j][1];
              bijiao[j][0]=zhongjian[0];
              bijiao[j][1]=zhongjian[1];
           }
           else;
       }
    }
        
      for(i=0;i<l;i++)
    {
       for(j=0;j<renshu;j++)
       {
          if(bijiao[l-1-i][0]==nianling[j][0]&&bijiao[l-i-1][1]==nianling[j][1])
          printf("%s\n",id[j]);
          else;                
       }                
    }
    
   
       for(j=0;j<renshu;j++)
       {
          if(nianling[j][0]<60)
          printf("%s\n",id[j]);
          else;                
       }             
    
    getchar();
    getchar();
}