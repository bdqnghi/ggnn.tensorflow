int main()
{
  
     char a[101];
     cin.getline(a,101);
     int i,j,k,l;
     l=strlen(a);
     int c[l];
     int d[l];
     for(i=0;i<l;i++)
     {
        d[i]=0;
     }
     for(i=0;i<l;i++)
     {
       a[i]=a[i]-'0';
     }
     if(l==1)
     {
       int t=a[0];
       cout << 0 << endl;
       cout << t << endl;
     }
     else if((l==2)&&(a[0]==1)&&(a[i]<3))
     {
       int p=a[0];
       int q=a[1];
          cout << 0 << endl;
       cout << p*10+q << endl;
     }
     else
     {
     if((a[0]==1)&&(a[1]<3))
     {
       a[0]=0;
       a[1]=10+a[1];
     }
     else ;
     for(i=1;i<l;i++)
     {
       d[i-1]=(a[i]+a[i-1]*10)/13;
       k=(a[i]+a[i-1]*10)%13;
       a[i]=k;
     }
     if(d[0]!=0)
     {
       for(i=0;i<l-1;i++)
       {
         cout << d[i];
       }
       cout << endl;
       cout << k << endl;
     }
     else 
     {
         for(i=1;i<l-1;i++)
       {
         cout << d[i];
       }
       cout << endl;
       cout << k << endl;
     }
     }
  cin.get();cin.get();cin.get();
  return 0;
}
