int main()
{
int a;
cin>>a;
int s,t,d;
s=(a%3==0);
t=(a%5==0);
d=(a%7==0);
if(s&&t&&d==1) cout<<"3 5 7"<<endl;
if(s&&(!t)&&d==1) cout<<"3 7"<<endl;
if(s&&t&&(!d)==1) cout<<"3 5"<<endl;
if((!s)&&t&&d==1) cout<<"5 7"<<endl;
if((!s)&&(!t)&&d==1) cout<<"7"<<endl;
if((!s)&&t&&(!d)==1) cout<<"5"<<endl;
if(s&&(!t)&&(!d)==1) cout<<"3"<<endl;
if((!s)&&(!t)&&(!d)==1) cout<<"n"<<endl;
return 0;
}
