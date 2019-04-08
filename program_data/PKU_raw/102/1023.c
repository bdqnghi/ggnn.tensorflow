int main()
{
   int n,ans=0;
   cin>>n;
   int aa=0;
   int bb=0;
   double a[10000];
   double b[10000];
   for (int i=1;i<=n;i++)
   {
       char s[100];double t;
       cin>>s>>t;
      // cout<<s<<" "<<t;
       if (s[0]=='m') {aa++;a[aa]=t;}else {bb++;b[bb]=t;}
   }    
   sort(a+1,a+aa+1);
   sort(b+1,b+bb+1);
   for (int i=1;i<=aa;i++) printf("%.2f ",a[i]);
   for (int i=bb;i>=1;i--) if (i!=1)printf("%.2f ",b[i]);else printf("%.2f\n",b[i]);
   //for (;;);
}    