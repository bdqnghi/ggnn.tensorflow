int main()
{
    char sn[4]={'z','q','s','l'};                                               //??sn[4]????? 
    int wt[4],rk[4],w=0;
    //??w???????????????wt[4]??????1/10???rk[4]????????rk[n]?????wt[i]?sn[i]?????????????????? 
    for(int i=0;i<4;i++)rk[i]=i;                                                //??rk[4]??????wt[n]?sn[n]????? 
    for(wt[0]=1;wt[0]<=5;wt[0]++)                                               //???A??wt[0]?wt[3]?????? 
    {
        for(wt[1]=1;wt[1]<=5;wt[1]++)
        {
            for(wt[2]=1;wt[2]<=5;wt[2]++)
            {
                for(wt[3]=1;wt[3]<=5;wt[3]++)
                {
                    if(wt[0]+wt[1]==wt[2]+wt[3]&&wt[0]+wt[3]>wt[1]+wt[2]&&wt[0]+wt[2]<wt[1])
                    {
                        int t;
                        w=1;
                        for(int i=0;i<4;i++)                                    //???B????sn[4]?wt[4]?????????????????? 
                        {
                            for(int j=0;j<4;j++)
                            {
                                if(wt[rk[j]]<wt[rk[j+1]])
                                {
                                    t=rk[j];
                                    rk[j]=rk[j+1];
                                    rk[j+1]=t;
                                }
                            }
                        }                                                       //???B?? 
                        break;
                    }
                }
                if(w==1)break;                                                  //????w=1?????????????????????goto??? 
            }
            if(w==1)break;
        }
        if(w==1)break;
    }                                                                           //???A?? 
    for(int i=0;i<4;i++)cout<<sn[rk[i]]<<' '<<10*wt[rk[i]]<<endl;
    return 0;
}
