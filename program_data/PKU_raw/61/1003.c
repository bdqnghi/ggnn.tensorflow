int main()
  {
   int k,a=1,b,c=2,d=0,e=1,f,h[a];
   cin>>k;
   for(a=1;a<=k;a++)
      {cin>>b;
        if(b==1) h[a]=b;
        else
        for(c=2;c<=b;c++)      //??b????
        {   f=(d+e);
            d=e;
            e=f;
        }
           h[a]=e;
            e=1;
            d=0;
      }
      for(a=1;a<=k;a++)
      {cout<<h[a]<<endl;
      }
        return 0;
}
