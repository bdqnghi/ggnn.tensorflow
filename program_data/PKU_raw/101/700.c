
void search();
int f[3];
int main()
{

   int i,j,k;
   for(i=1;i<4;i++)
   {
      f[0]=i;
      for(j=1;j<4;j++)
      {
          if(i==j)continue;
          f[1]=j;
          for(k=1;k<4;k++)
          {
              if(k==j)continue;
              if(k==i)continue;
              f[2]=k;
              search();
          }
      }
   }
    return 0;
}

void search()
{
    int count0=0,count1=0,count2=0,i,j;
    char a;
    if(f[1]>f[0])count0++;
    if(count0!=3-f[0])return;
    if(f[0]>f[1])count1++;
    if(f[0]>f[2])count1++;
    if(count1!=3-f[1])return;
    if(f[2]>f[1])count2++;
    if(f[1]>f[0])count2++;
    if(count2!=3-f[2])return;
    for(i=1;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(f[j]==i)
            {
                a=j+'A';
                cout<<a;
            }
        }
    }
    return;
}
