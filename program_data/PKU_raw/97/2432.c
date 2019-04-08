int main()
{
    int m,n,x,i,an=0;
    cin>>m;
    if  (m/100>0) {cout<<m/100<<endl;m=m% 100;}else cout<<0<<endl;
      if  (m/50>0) {cout<<m/50<<endl;m=m% 50;}else cout<<0<<endl;
        if  (m/20>0) {cout<<m/20<<endl;m=m% 20;}else cout<<0<<endl;
          if  (m/10>0) {cout<<m/10<<endl;m=m% 10;}else cout<<0<<endl;
            if  (m/5>0) {cout<<m/5<<endl;m=m% 5;}else cout<<0<<endl;
     cout<<m;
 cin>>m;
    
    return 0;
  
    }
