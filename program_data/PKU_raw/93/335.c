int main()
{
    int a=0,b=0;
    cin>>a;
    if(a%3==0)
       {b=b+1;}  else{b=b+20;}
    if(a%5==0)
       {b=b+3;}  else{b=b+20;}
    if(a%7==0)
       {b=b+5;}   else{b=b+20;}
    if(b==9){cout<<"3 5 7";}else{}
    if(b==24){cout<<"3 5";}else{}
    if(b==26){cout<<"3 7";}else{}
    if(b==28){cout<<"5 7";}else{}
   if(b==41) {cout<<"3";}else{}
    if(b==43){cout<<"5";}else{}
        if(b==45){cout<<"7";}else{}
    if(b==60){cout<<'n';}else{}
return 0;
}
 