int main()
{
int x,sum=0;
cin>>x;
if(x%3==0)
sum=sum+3;
if(x%5==0)
sum=sum+5;
if(x%7==0)
sum=sum+7;
switch(sum)
{
case 15:cout<<"3 "<<"5 "<<"7"<<endl;break;
case 8:cout<<"3 "<<"5"<<endl;break;
case 10:cout<<"3 "<<"7"<<endl;break;
case 12:cout<<"5 "<<"7"<<endl;break;
case 3:cout<<"3"<<endl;break;
case 5:cout<<"5"<<endl;break;
case 7:cout<<"7"<<endl;break;
default:cout<<"n"<<endl;break;
}
return 0;
}