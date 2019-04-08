int main()
  {
   int m,i=3,n=2,j;
   cin>>m;
   while(i<=m/2){
	     while(n<i){
	      if (i%n!=0)  {
                 if (n>=i-1){
			            j=m-i;
						n=2;
			         while(n<j){
	                               if (j%n!=0){
						                                if(n>=j-1){
											cout<<i<<" "<<j<<"\n";}
									       n++;}
				                      else n=j;
					           }
				      n=i-1; }
				   n++;}
		    else n=i;}
		 i++;
		 n=2;}

	return 0;
}