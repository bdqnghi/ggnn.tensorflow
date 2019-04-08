//****************************
//??3?5?7????
//****************************
int main()
{
   int n,a,b,c,sum;
   cin>>n;
   if(n%3==0){a=1;}
     else {a=0;}
   if(n%5==0){b=2;}
     else {b=0;}
   if(n%7==0){c=5;}
     else {c=0;}//????n????3?5?7??
   sum=a+b+c;
   if(sum==0)cout<<"n";
   else if(sum==1)cout<<"3";
   else if(sum==2)cout<<"5";
   else if(sum==5)cout<<"7";
   else if(sum==3)cout<<"3"<<" "<<"5";
   else if(sum==6)cout<<"3"<<" "<<"7";
   else if(sum==7)cout<<"5"<<" "<<"7";
   else if(sum==8)cout<<"3"<<" "<<"5"<<" "<<"7";//?sum????n????????
   return 0;
}