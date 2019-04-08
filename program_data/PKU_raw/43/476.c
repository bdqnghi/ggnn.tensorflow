int main() 
{
    int oushu,i,count,cha,j,k;//oushu??????i,j,k?????cha??i????? 
    cin>>oushu;
    for(i=3;i<=oushu*0.5;i++)//i?????cha 
    {
                        cha=oushu-i;
                        count=0;
                        for(j=2;j<i;j++) 
                        {
                                          if (i%j==0) count++;//??????????count?? 
                        }
                        for(k=2;k<cha;k++)
                        {
                                         if (cha%k==0) count++;
                        }
                        if (count==0) cout<<i<<" "<<cha<<endl;//????????? 
    }
    return 0;
    }
