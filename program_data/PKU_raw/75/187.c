int max(int x,int y)
{
    return(x>y?x:y);
}

int main()
{   //int a[1000];
    int x[1000];
    int y[1000];
    int z[1000]={0,0};
    int t;
    int m=0;
    char c;
    int i=1,num=0;
    //if(getchar()=='\n')
    //{

    // if(getchar()=='\n')
      //  cout<<0<<" "<<0;
  //  }
    //else
  //  {
        cin>>x[0];
    while(getchar()!='\n')
  {

      cin>>x[i];


      i=i+1;
      num=num+1;

  }
//cout<<num;

    for(i=0;i<num;i++)
    {
        cin>>y[i];
        cin>>c;

    }
    cin>>y[num];
  for(i=0;i<=num;i++)
  {
      for(t=0;t<10000;t++)
      {
          if(t>=x[i]&&t<y[i])
            z[t]=z[t]+1;
      }
  }
  for(i=0;i<1000;i++)
  {
      m=max(z[i],m);
  }
  cout<<num+1<<" "<<m;

   // }


    return 0;
}