//**********************************
//????????
//???2013.10.17
//**********************************
int main()
{
	 int a[200],b[200],c[200],n=0,i=0,j=0,k=0;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
		 cin>>a[i]>>b[i]>>c[i];
		 k=0;j=0;
		 if(c[i]<b[i])

		    { j=c[i];
		     c[i]=b[i];
			 b[i]=j;}
		 for(;b[i]<c[i];b[i]++)
		 {
			 if(b[i]==1||b[i]==3||b[i]==5||b[i]==7||b[i]==8||b[i]==10||b[i]==12)
			 {  k=k+31; }
			 else if(b[i]==2)
			 {	 
				 if(a[i]%100==0&&a[i]%400==0)
			       k=k+29;
				 else if(a[i]%(100)!=0&&a[i]%4==0)
					k=k+29;
				 else
				   k=k+28;
			 }
			 else
			 {  k=k+30; }
		 }
	   if(k%7==0)
		   cout<<"YES"<<endl;
	   else
		   cout<<"NO"<<endl;
	 }
   return 0;
}