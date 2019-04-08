int main(){
	int n,i,p;
	int an1[500]={0},an2[500]={0},sum[500]={0};
	 an1[0]=1;
	 an2[0]=1;
    scanf("%d",&n);
	if(n==0){
		printf("1");
	}
	else{
	for(p=0;p<n;p++){
        int carry = 0;       //???
	    for (i = 0; i < 500; i++){
	    	sum[i] = an1[i] + an2[i] + carry;
		  if(sum[i] >= 10){
		    sum[i] -= 10;
		    carry = 1;
		  } else {
		    carry = 0;
		  }
		}
		for(i=0;i<500;i++){
            an1[i]=an2[i]=sum[i];
		}
	}
      i = 500-1;
	while(sum[i]==0) {          //???????0??
		 i--; 
	  }
	for(;i>=0;i--){                    //??????0?
		printf("%d", sum[i]);   //??????
	}
	printf("\n");
	}
	return 0;
}
