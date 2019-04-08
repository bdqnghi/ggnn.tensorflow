int main()
{
     int n,decade,hundred,thousand;
	 cin >> n;
	 cout << n-n/10*10 ;
	 if(n >= 10)
	 {
         decade = n/10 ;
		 cout << decade-decade/10*10 ;
	 }
	 if(n >= 100)
	 {
         hundred = decade/10 ;
		 cout << hundred-hundred/10*10 ;
	 }
	 if(n >= 1000)
	 {
          thousand = hundred/10 ;
		 cout << thousand-thousand/10*10 ;
	 }
	 if(n == 10000)
	 cout << "1" << endl;
	 return 0;
}
