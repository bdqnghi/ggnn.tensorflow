int main()
{
int lai[1001]={0},zou[1001]={0};
int tongji[1001]={0};
int count=1,renshu=0;
char meiyong=0;
int shijianbiao[1001]={0};
cin>>lai[1];                    //??????????????????????????????????cin.get()?????????????
while(meiyong=cin.get()==',')
{
count++;
cin>>lai[count];
}
renshu=count;
count=1;
cin>>zou[1];                    //??????????????
while(meiyong=cin.get()==',')
{
count++;
cin>>zou[count];
}
int i=0;                        //????????
for(count=1;count<=renshu;count++)
for(i=lai[count];i<zou[count];i++)
{shijianbiao[i]++;}
int max=shijianbiao[0];
for(count=1;count<=1000;count++)
if(shijianbiao[count]>max)max=shijianbiao[count];
cout<<renshu<<" "<<max<<endl;
return 0;

}