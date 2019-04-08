int main()
{
   int n,m,i,s;
   do
   {
       cin>>n>>m;
       if(n==0||m==0) break;
       else if(n==1) cout<<"1"<<endl;
       else
	   { s=0;
	     for (i=2; i<=n; i++) 
                s=(s+m)%i;
             printf ("%d\n",s+1);
	   }
   }
   while(n!=0&&m!=0);
   return 0;
}