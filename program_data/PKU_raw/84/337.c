
int main()
{
   int a[100],n,i,max,sec;
   cin>>n;
   for(i=0;i<n;i++)
   { cin>>a[i];}
   max=a[0];
   sec=a[0];
   for(i=1;i<n;i++)
   {
     if(a[i]>max) max=a[i];
     else if (a[i]>sec) sec=a[i];
    }
    cout<<max<<endl<<sec<<endl;
   return 0;
}
   