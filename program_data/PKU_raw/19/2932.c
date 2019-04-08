int main()
{  char a[50][20],p[20],r[20];
   int i=0,n=0;
   cin>>a[0];
   while(cin.get()!='\n')
   {
   i++;
   cin>>a[i];n=i;
   }
   cin>>p;cin.get();cin>>r;
   for(i=0;i<=n;i++)
   {
   if(strcmp(a[i],p)==0)strcpy(a[i],r);
   }
   for(i=0;i<n;i++)cout<<a[i]<<" ";
   cout<<a[n]<<endl;
	return 0;
}