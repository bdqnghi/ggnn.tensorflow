void function(int len,int rem);
int main()
{
	int len,rem;
	cin>>len;
	rem=len;
	function(len,rem);
	
	return 0;
}

void function(int len,int rem)
{ int num;
  if(len>0){
  cin>>num;
  function(len-1,rem);
     if(len==rem)cout<<num;
	 else cout<<num<<" ";
  }
}
