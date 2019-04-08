int main()
{
    char a[5000],b[5000];
    cin>>a>>b;
    int num=1,lengtha,lengthb,ren[1001],a0[1000],b0[1000],j=0,k=0; 
    lengtha=strlen(a);
    lengthb=strlen(b);
    memset(ren,0,sizeof(ren));//???0 
    memset(a0,0,sizeof(a0));
    memset(b0,0,sizeof(b0));
    for(int i=0;i<lengtha;i++)//????????????? 
    {
      if(a[i]!=',')
      a0[j]=10*a0[j]+(a[i]-'0');//?????? 
      if(a[i]==',')
      {
        num=num+1;//????? 
        j=j+1;//??????????? 
      }
    }
    for(int i=0;i<lengthb;i++)
    {
      if(b[i]!=',')
      b0[k]=10*b0[k]+(b[i]-'0');//?????? 
      if(b[i]==',')
      k=k+1;//??????????? 
    }
    for(int i=0;i<1000;i++)
    {
      for(j=0;j<num;j++)
      {
        if((a0[j]<=i)&&(b0[j]>i))//?????????? 
        ren[i]=ren[i]+1;
      }
    }
    sort(ren,ren+1000);//????????? 
    cout<<num<<" "<<ren[999];
    return 0;
}
