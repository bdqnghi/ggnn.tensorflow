int ji(int x)
{
	cout<<x<<"*3+1="<<x*3+1<<endl;
	return (x*3+1);
}
 int ou(int x)
 {
	 cout<<x<<"/2="<<x/2<<endl;
	 return (x/2);
 }
 int main()
 {
	 int n;
	 cin>>n;
	 while(n!=1)
	 {
		 if(n%2==1) {n=ji(n);continue;}
		 else {n=ou(n);continue;}
	 }
		 if(n==1)cout<<"End"<<endl;
	 return 0;
 }