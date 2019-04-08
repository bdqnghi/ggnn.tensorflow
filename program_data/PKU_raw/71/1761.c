

int main()
{
    int i,j,n,x,y,z,day=0;
    cin>>n;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    while(n>0)
    {
       cin>>x>>y>>z;
       if((x%4==0&&x%100!=0)||x%400==0)
       {  if(y<z) { for(i=y;i<z;i++)
              day+=b[i];
           if(day%7==0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;}
           else { for(i=z;i<y;i++)
              day+=b[i];
           if(day%7==0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;}
       }
       else {  if(y<z) { for(i=y;i<z;i++)
              day+=a[i];
           if(day%7==0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;}
           else { for(i=z;i<y;i++)
              day+=a[i];
           if(day%7==0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;}
       }
       day=0;n--;
    }
    return 0;
}
