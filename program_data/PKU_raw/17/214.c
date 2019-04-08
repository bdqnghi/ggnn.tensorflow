int main()
{
 char a[101];
 int i,n,p,q;
 while(cin.getline(a,101))
 {   int b[101]={0};	 
	 p=0;
     q=0;
	 n=strlen(a);
     for(i=0;i<=n-1;i++)
	 {
		 if(a[i]==')')
		 {
			 q++;
		 
			 if(q>p)
		
			 {
			 
				 b[i]=1;
				 q=q-1;
		 
			 }
		 }
		 if(a[i]=='(')
		 {
			 p++;
		 }

	 }
	 p=0;
	 q=0;
	 for(i=n-1;i>=0;i--)
	 {
		 if(a[i]==')')
		 {
			 q++;
		 }
		 if(a[i]=='(')
		 {
			 p++;

			 if(p>q)
		
			 {
			 
				 b[i]=2;
				 p=p-1;
		
			 }
		 }
		 
	 }
	 for(i=0;i<=n-1;i++)
	 {
		 cout<<a[i];
	 }
	 cout<<endl;
	 for(i=0;i<=n-1;i++)
	 {
		 if(b[i]==0)
		 {
			 cout<<" ";
		 }
		 if(b[i]==1)
		 {
			 cout<<"?";
		 }
		 if(b[i]==2)
		 {
			 cout<<"$";
		 }
	 }
	 cout<<endl;
 }
 return 0;
}
