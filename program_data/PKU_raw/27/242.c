int main()
{int n,i;
double a,b,c,x1,x2;
cin>>n;
for (i=1;i<=n;i++)
{cin>>a>>b>>c;
if ((b*b-4*a*c)>0) {
x1=(-b+sqrt(b*b-4*a*c))/(2*a);x2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"x1=";
printf("%.5f",x1);
cout<<";x2=";
printf("%.5f",x2);cout<<endl;} else
if (b*b-4*a*c==0){x1=(-b+sqrt(b*b-4*a*c))/(2*a);
cout<<"x1=x2=";printf("%.5f",x1);cout<<endl;}else
{x1=-b/(2*a);x2=(sqrt(4*a*c-b*b))/(2*a);
if (x2<0) x2=-x2; 
if (x1==-0) x1=0;
cout<<"x1=";printf("%.5f",x1);cout<<"+";printf("%.5f",x2);cout<<"i;";
cout<<"x2=";printf("%.5f",x1);cout<<"-";printf("%.5f",x2);cout<<"i"<<endl;
                                                
                                                 }
    
    }

    
    
        }
