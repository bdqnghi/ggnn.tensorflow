int main()
{
    int j,flag[40],start[40],end[40];
    char a[31];
    cin.getline(a,31,'\n');
    int i=0,count=0;
    if(a[i]>'0'&&a[i]<'9') 
    {
                           flag[i]=1;
                           start[1]=0;
    }
    else flag[i]=0;
    for(i=1;i<=30;i++)
    {
                  if(a[i]>='0'&&a[i]<='9') 
                  {
                                         flag[i]=1;
      
                  }
                  else flag[i]=0;
                  if(flag[i-1]==0&&flag[i]==1) 
                  {
                                               start[count+1]=i;
                  }
                  if(flag[i-1]==1&&flag[i]==0)
                  {
                                              count++;
                                              end[count]=i-1;
                  }
 
    }
    for(i=1;i<=count;i++)
    {
                         for(j=start[i];j<=end[i];j++)
                         {
                                                      cout<<a[j];
                         }
                         if(i!=count) cout<<endl;
    }
    return 0;

}
