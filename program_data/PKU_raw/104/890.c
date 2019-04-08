void count (int ,int );
int flag;
int main()
{  int m,n,temp;
  cin>>m>>n;
  if( m > n )
  {
	  temp = n;
	  n = m;
	  m = temp;
  }	
  flag = 0;
  for(int i=m;i>=1 && flag  == 0;i = i/2 )
  {
	count (n,i);
  }
  return 0;
}
 void count (int n,int i)
 {   
	 if( n < 1 || n < i )
	 {
		 return ;
	 }
	 else
	 {
		 if(i == n)
		 {
	    	cout<<i<<endl;
			flag = 1;
			return ;
		 }
		 else
		 {
			count(n/2,i);
		 }
	 }
	 return ;
 }
