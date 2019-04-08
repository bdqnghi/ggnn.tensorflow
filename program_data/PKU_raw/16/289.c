int main()
{int a,b,c,d,n;
 cin>>n;
 if(n/10<1)
	 cout<<n<<endl;
  else{d=n%10;
       n=n/10;
       if(n/10<1)
	   cout<<d<<n<<endl;
       else{c=n%10;
            n=n/10;
            if(n/10<1)
	        cout<<d<<c<<n<<endl;
            else{b=n%10;
                 n=n/10;
                 if(n/10<1)
	             cout<<d<<c<<b<<n<<endl;
                 else{a=n%10;
                      n=n/10;
                      if(n/10<1)
	                  cout<<d<<c<<b<<a<<n<<endl;
				 }}}}
  return 0;
}