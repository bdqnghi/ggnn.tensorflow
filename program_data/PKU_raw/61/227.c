int main()
{
    double a=1,b=1,l=(1+sqrt(5))/2,m=(1-sqrt(5))/2,c;
    int i,n,k,h,an;
    cin >> h;
    for(k=1;k<=h;k++)
   {
       cin >> n;
       a=1;b=1;
    for(i=1;i<=n;i++)
    {
                    
                     a=a*l;
                     b=b*m;
                     }
    c=(a-b)/(l-m);
    cout << c << endl;
   }
   return 0;
}
