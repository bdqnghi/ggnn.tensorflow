int main(){
int n;
double a,b,c,j,x1,x2,m;
cin>>n;
do 
{n--;
cin>>a>>b>>c;
x1=(-b + sqrt(b*b-4*a*c))/(2*a) ;
x2=(-b - sqrt(b*b-4*a*c))/(2*a);
m=(-b)/(2*a);
j=b*b-4*a*c ;
cout<<fixed<<setprecision(5);
if(x1<0.00001&&x1>-0.00001) x1=0;
if(x2<0.00001&&x2>-0.00001) x2=0;
     if(j>0) cout<<"x1="<<x1<<";x2="<<x2<<endl;
        else if(j==0) cout<<"x1=x2="<<x1<<endl;
                else {if(m<0.00001&&m>-0.00001) m=0;
                     cout<<"x1="<<m<<"+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i";
                     cout<<";x2="<<m<<"-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;}
}while(n>=1);
return 0;
}