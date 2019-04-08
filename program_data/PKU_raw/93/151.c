int main()
{
   int n;
   int i,m,p;
   while(cin>>n)
   {
	   m=0;p=0;
       for(i=3;i<=7;i+=2)
	   {if(n%i==0)m++;}  
	   if(m==3)
		   cout<<"3 5 7"<<endl;
	   else if(m==1)
		   for(i=3;i<=7;i+=2){if(n%i==0)cout<<i<<endl;}
	   else if(m==2)
		   for(i=3;i<=7;i+=2)
		   {
			   if(n%i==0&&p==0){cout<<i<<" ";p++;}
			   else if(n%i==0&&p!=0)cout<<i<<endl;
		   }
	   else if(m==0)
		   cout<<"n"<<endl;
   }
return 0;
}