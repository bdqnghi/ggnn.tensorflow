int main(){

int a,b,c;
a=3;b=2;c=1;
if((b>a)+(a==c)==0&&(a>b)+(a>c)==1&&(c>b)+(b>a)==2)
cout<<"CBA"<<endl;
a=3;b=1;c=2;
if((b>a)+(a==c)==0&&(a>b)+(a>c)==2&&(c>b)+(b>a)==1)
cout<<"BCA"<<endl;
a=2;b=3;c=1;
if((b>a)+(a==c)==1&&(a>b)+(a>c)==0&&(c>b)+(b>a)==2)
cout<<"CAB"<<endl;
a=2;b=1;c=3;
if((b>a)+(a==c)==1&&(a>b)+(a>c)==2&&(c>b)+(b>a)==0)
cout<<"BAC"<<endl;
a=1;b=3;c=2;
if((b>a)+(a==c)==2&&(a>b)+(a>c)==0&&(c>b)+(b>a)==1)
cout<<"ACB"<<endl;
a=1;b=2;c=3;
if((b>a)+(a==c)==2&&(a>b)+(a>c)==1&&(c>b)+(b>a)==0)
cout<<"ABC"<<endl;
 return 0;

}
