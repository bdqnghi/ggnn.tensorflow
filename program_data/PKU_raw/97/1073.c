int main()
{
	int n,a,b,c,d,e,f ;
        cin>>n;  
        if(n<100)  cout<<0<<endl;
        else  {a=(n-n%100)/100 ;
              n=n%100;
              cout<<a<<endl;}
        if(n<50)   cout<<0<<endl;
        else  {b=(n-n%50)/50 ;
              n=n%50;
              cout<<b<<endl;}
        if(n<20)   cout<<0<<endl;
        else  {c=(n-n%20)/20 ;
              n=n%20;
              cout<<c<<endl;}
        if(n<10)   cout<<0<<endl;
        else  {d=(n-n%10)/10 ;
              n=n%10;
              cout<<d<<endl;}
        if(n<5)   cout<<0<<endl;
        else  {e=(n-n%5)/5 ;
              n=n%5;
              cout<<e<<endl;}
        if(n<1)   cout<<0<<endl;
        else  {f=(n-n%1)/1 ;
              n=n%5;
              cout<<f<<endl;}
        return 0;
} 