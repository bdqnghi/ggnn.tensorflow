int main ()
{
 int a,b,c;
 cin>>a;
 c=0;
 while (a!=1)
 {
  b=a%2;//??a????
  if (b)
  {
	  c=a*3+1;
      cout<<a<<"*"<<3<<"+"<<1<<"="<<c<<endl;
      a=c;//??a??????
   }
  else 
  {
	  c=a/2;
      cout<<a<<"/"<<2<<"="<<c<<endl;//a??????
      a=c;//??a??
  }
 }
 cout<<"End"<<endl;//???????End
 return 0;
}
