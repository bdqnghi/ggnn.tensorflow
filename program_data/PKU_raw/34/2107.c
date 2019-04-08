/**
* @file 4.cpp
* @auther ???
* @date   2011/10/26
* @description
*      ????????????????? 
*/ 


int suan1(int p)
{
cout<<p<<"*"<<3<<"+"<<1<<"="<<p*3+1<<endl;
return(p*3+1);

}

int suan2(int p)
{
cout<<p<<"/"<<2<<"="<<p/2<<endl;
return(p/2);

}

int main()
{
 int t;
 cin>>t;

 while (t>1)
 {
   if (t % 2==0)
	  t= suan2(t);
   else
	   t=suan1(t);
 
 
 }
 cout<<"End";
    return(0);
    
    
} 
