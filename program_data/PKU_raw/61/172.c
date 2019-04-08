int main(){
   int f1,f2,f3,n,a,i,b;
   cin>>n;
   for (i=1;i<=n;i=i+1)
       {
          cin>>a;
          f1=1;
          f2=1;
          for(b=1;b<=(a-1);b++)
          {
                               f3=f1+f2;
                               f1=f2;
                               f2=f3;
          }
cout<< f1  << endl;}
return 0;
}
