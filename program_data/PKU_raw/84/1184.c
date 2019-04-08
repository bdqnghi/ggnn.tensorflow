int main ()  {
	int result=0,p=0;
	int num,n;
	int i=1;
       scanf("%d", &n);
	while(i<=n&&n<=100){
		scanf("%d", &num);
	      if(i == 1){
			 result = num;			
		} 
		  else{    
		      if(num > result){
			     p=result;
				  result = num; }
			  else if(num<result&&num>p){
				  p=num;}
	      }
		   i++;
	}
	printf("%d\n%d", result,p);
	return 0;
}