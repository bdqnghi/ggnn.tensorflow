
int main()
{
    int taxis[5],cc[5],i;
    for(taxis[0]=0; taxis[0]<5; taxis[0]++)//?????
    {
        for(taxis[1]=0; taxis[1]<5; taxis[1]++)//?????
        {
            if(taxis[0]==taxis[1])//?????????
                continue;
            for(taxis[2]=0; taxis[2]<5; taxis[2]++)//?????
            {
                if(taxis[2]==taxis[0] || taxis[2]==taxis[1])//?????????
                    continue;
                for(taxis[3]=0; taxis[3]<5; taxis[3]++)//?????
                {
                    if(taxis[3]==taxis[0]||taxis[3]==taxis[1]||taxis[3]==taxis[2])//?????????
                        continue;
                    for(taxis[4]=0; taxis[4]<5; taxis[4]++)//?????
                    {
                        if(taxis[4]==taxis[0]||taxis[4]==taxis[1]||taxis[4]==taxis[2]||taxis[4]==taxis[3])//?????????
                            continue;
                        cc[0]=(4==taxis[0]);//A????
                        cc[1]=(1==taxis[1]);//B????
                        cc[2]=(0==taxis[4]);//C????
                        cc[3]=(2!=taxis[0]);//D????
                        cc[4]=(3==taxis[0]);//E????
                        if(cc[taxis[0]]==1 && cc[taxis[1]]==1 && cc[taxis[2]]==0 && cc[taxis[3]]==0 && cc[taxis[4]]==0 &&//?????1???2?????????
                           taxis[1]!=4 && taxis[2]!=4)//E??????2???3?
                        {
                            for(i=0; i<5; i++)
                            {
                                for(int j=0;j<5;j++)
                                    if(taxis[j]==i)
                                        cout<<j+1;//??????
                                if(i==4) cout<<endl;
                                else cout<<' ';
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;//?????
}
