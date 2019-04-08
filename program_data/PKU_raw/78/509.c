//****************************************************
//????????
//??????
//?????2011.11.3 22?49
//****************************************************
int main()
{
    char name[4]={'z','q','s','l'};//??????
    int weight[4];//??????
    int a,b,c;
    int i,j;
    for(weight[0]=1;weight[0]<6;weight[0]++)//?????????????
    {
    for(weight[1]=1;weight[1]<6;weight[1]++)
    {if(weight[0]==weight[1])continue;
    else
      for(weight[2]=1;weight[2]<6;weight[2]++)
      {if(weight[2]==weight[0]||weight[2]==weight[1])continue;
      else
      for(weight[3]=1;weight[3]<6;weight[3]++)
        {if(weight[3]==weight[0]||weight[3]==weight[1]||weight[3]==weight[2])continue;
        else
        {//?????????
          a=(weight[0]+weight[1]==weight[2]+weight[3]);
          b=(weight[0]+weight[3]>weight[2]+weight[1]);
          c=(weight[0]+weight[2]<weight[1]);
          if(a&&b&&c==1)//???????
          {
            for(i=5;i>0;i--)//??????
            {
              for(j=0;j<4;j++)
              {if(weight[j]==i)cout<<name[j]<<" "<<weight[j]<<"0"<<endl;}
            }
          }
        }
    }}}}
    cin>>i;
    return 0;
}
