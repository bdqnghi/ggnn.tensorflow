int main()
{
    int n=0,a[1000]={0},b[1000],d[1000],count=0,i,j,zongshu;
    char c,nanhai;
    c=getchar();
    nanhai=c;
    while (c!='\n')
    {
          if (c==nanhai) a[n]=1;     //??? 
          else
          {
              a[n]=2;                 //??? 
              d[count]=n;             //??????? 
              count++;                //????? 
          }
          n++;
          c=getchar();
    } 
    zongshu=n;     //??? 
    while (n!=0)
    {
          for (i=0;i<zongshu-1;i++)
          {
              if (a[i]==1)        //?? 
              {
                          j=i+1;
                          while (a[j]==0) j++;     //???????????? 
                          if (a[j]==2)            //?????? 
                          {
                                      a[i]=0;
                                      a[j]=0;      //???? 
                                      b[j]=i;      //??????????? 
                                      n=n-2;       //?????2 
                          }
              }
          }
    }
    for (i=0;i<count;i++) 
    {
        cout<<b[d[i]]<<' '<<d[i];    //????? 
        if (i!=count-1) cout<<endl;
    }
    return 0;
}
          
                        
