 int n,k,i; 
int f(int x) {
 int t; 
	if(x==n) 		 { 		
	t=n*i+k; 	 i++;	 	return t; 		 
} 
	 for(;;) { 	
t=f(x+1) ;
 if(t%(n-1)==0) 	 { 		
 t=t/(n-1)*n+k; 	 return t;
 } 	
}
}
 int main() {
 cin>>n>>k;
 	 cout<<f(1)<<endl;
 return 0; 
}