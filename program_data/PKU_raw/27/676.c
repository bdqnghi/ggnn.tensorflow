
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
     x1=(0-b+sqrt(d))/(2*a);
     x2=(0-b-sqrt(d))/(2*a);    //?????
     cout<<fixed<<setprecision(5)<<"x1="<<x1<<';'<<"x2="<<x2<<endl;
 }
 if(d==0)             //??????
 {
      x1=(0-b)/(2*a);
      cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;  //x1??x2
 }
 if(d<0)             //??????
 {
        e=(sqrt(-d))/(2*a);
        f=(0-b)/(2*a);
        cout<<fixed<<setprecision(5)<<"x1="<<f<<"+"<<e<<"i"<<";"<<"x2="<<f<<-e<<"i"<<endl;
 }
 }
 return 0;
}                        //????
