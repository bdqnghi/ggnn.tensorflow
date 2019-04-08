int main()
{
int n;   //???????
int d3=0,d5=0,d7=0,d=0;  //???????? 
cin>>n;
if (n%3==0) {d3=1;d=d+1;} //??d?????????? 
if (n%5==0) {d5=1;d=d+2;}
if (n%7==0) {d7=1;d=d+4;}
if (d==0) cout<<"n";      //??????? 
if (d==1) cout<<"3";
if (d==2) cout<<"5";
if (d==4) cout<<"7";
if (d==3) cout<<"3 5";
if (d==5) cout<<"3 7";
if (d==6) cout<<"5 7";
if (d==7) cout<<"3 5 7";
return 0;
}