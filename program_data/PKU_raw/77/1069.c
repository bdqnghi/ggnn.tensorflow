int total,i,j;
char boy,girl;
char child[100];
int flag[100];
void departure();

int main()
{
    cin>>child;
    total=strlen(child);
    boy=child[0];
    girl=child[total-1];
    for(i=0;i<=total-1;i++)flag[i]=i;
    departure();

    return 0;


}
 void departure()
{
    if(total==0)return;
    else
    {
        for(i=1;i<=total-1;i++)
        {

           if(child[i]==girl&&child[i-1]==boy)
           {
               cout<<flag[i-1]<<' '<<flag[i]<<endl;
              if(i!=total-1)
              {
                  for(j=i+1;j<=total-1;j++)
                  {
                      child[j-2]=child[j];
                      flag[j-2]=flag[j];

                  }
                 total-=2;
              }
              else total-=2;
            departure();
           }
        }
    }
}
