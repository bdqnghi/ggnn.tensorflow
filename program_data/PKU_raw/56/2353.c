

int main()
{
   int a,b=0,c=0;

   cin>>a;
   b=a%10;
   a=a/10;
   for(;b!=0;)
   { 
       c=c*10+b;
       b=a%10;
       a=a/10;
      
    }
   cout<<c;
    return 0;
}
