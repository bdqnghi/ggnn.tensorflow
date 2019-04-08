void function(int num){
	cout<<num%10;
	if ((num/10)!= 0) 
		function (num/10);
}
int main(){
	int num;
	cin>>num;
	function (num);
return 0;
}
