int ip(int n);
int opp(int n);
int ip(int n){
  int k,s;
  if(n==2){
	  return 1;
  }else if(n%2==0){
     return 0;
  
  }
  s=(int)sqrt((double)n);
  for(k=3;k<=s;k+=2){
	  if(n%k==0){
	    return 0;
	  }
     
  }
  return 1;
}


int main(){
	int n,i,t=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i=i+2){
		if(ip(i)&&ip(i+2)){
		    printf("%d %d\n",i,i+2);
			t=1;
		
		}
	
	}
	if(t==0){
	   printf("empty");
	
	}
   return 0;
}
