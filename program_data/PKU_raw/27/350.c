
//****************************************
//*????????????                                  **
//*??????  1100012927       **
//*???2011.09.16                          **
//****************************************

int main()
{
    int n;
    double a,b,c,delta,x1,x2,x1r;
    cin>>n;
    do{cin>>a>>b>>c;
        delta=b*b-4*a*c;
        if (delta>0) {x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("x1=%.5f",x1);
            cout<<";";
            printf("x2=%.5f",x2);
            cout<<""<<endl;}
        else if  (delta==0) {x1=(b)/(2*a);
            printf("x1=x2=%.5f",-x1);
            cout<<""<<endl;}
        else if  (delta<0) {delta=-delta;  
            x1=(sqrt(delta))/(2*a);
            x2=(-sqrt(delta))/(2*a);
            x1r=(-b)/(2*a);
            if  (x1r==0)
            { printf("x1=%.5f+",(-x1r));
            printf("%.5fi",x1);
            cout<<";";
            printf("x2=%.5f",(-x1r));
            printf("%.5fi",x2);
                cout<<""<<endl;}
            else { printf("x1=%.5f+",(x1r));
                printf("%.5fi",x1);
                cout<<";";
                printf("x2=%.5f",(x1r));
                printf("%.5fi",x2);
                cout<<""<<endl;}        }
        
        n=n-1;
    }while(n>=1);
    return 0;}
