
/*
 * ?????????.cpp
 *?????????
 *  Created on: 2012-10-12
 *      Author: ???
 */
int main()
{
 int n,i;
 float a,b,c;
 double d,e,f,x1,x2;  //????
 cin>>n;              //?????????
 for(i=n;i>=1;i--)    //??????
 {
 cin>>a>>b>>c;        //???????
 d=b*b-4*a*c;         //?????
 if(d>0)              //??????
 {
     x1=(-b+sqrt(d))/(2*a);
     x2=(-b-sqrt(d))/(2*a);    //?????
     cout<<fixed<<setprecision(5)<<"x1="<<x1+1e-9<<';'<<"x2="<<x2+1e-9<<endl;
 }
 if(d==0)             //??????
 {
      x1=-b/(2*a);
      cout<<fixed<<setprecision(5)<<"x1=x2="<<x1+1e-9<<endl;  //x1??x2
 }
 if(d<0)             //??????
 {
        e=(sqrt(-d))/(2*a);
        f=-b/(2*a);
        if(f<0&&f>-0.000001)
        {f=0;}
        cout<<fixed<<setprecision(5)<<"x1="<<f+1e-9<<"+"<<e+1e-9<<"i"<<";"<<"x2="<<f+1e-9<<-e+1e-9<<"i"<<endl;
 }
 }
 return 0;
}                        //????
