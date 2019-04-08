int main()
{
    int k,x1=0,x2=0,x3=0,sum;
    cin>>k;
    if(k%3==0) x1=3;
    if(k%5==0) x2=5;
    if(k%7==0) x3=7;
    sum=x1+x2+x3;
      if(sum==0) cout<<"n";
       if(sum==3) cout<< 3;
      if(sum==5) cout<< 5;
      if(sum==7) cout<< 7;
       if(sum==8) cout<< 3<<" "<< 5;
       if(sum==10) cout<< 3<<" "<< 7;
      if(sum==12) cout<< 5<<" "<< 7;
       if(sum==15) cout<< 3<<" "<< 5<<" "<< 7;
       return 0;
       }