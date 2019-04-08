int main(){
	int a,b,c,d,e,f;
	int A[100];
	int i=0,k=0;
	while(i<100){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		else{
			int sum=0;
		sum=3600-60*b-c+3600*(d+12-a-1)+60*e+f;
		A[i]=sum;	
		
		i++;
		k++;
		}
	}
	for(i=0;i<k;i++){
    printf("%d\n",A[i]);
	}




	 return 0;
}
