int reverse(int num){
	int k,N[100],i,rev;
	rev=0;
	if(num<10)
		return num;
	if(num>=10){
		k=0;
		while(1){
			if(num>0){
				N[k]=num%10;
				k++;
				num/=10;
			}else
				break;
		}
		for(i=0;i<k;i++)
			rev+=pow(10,i)*N[k-1-i];
		return rev;
	}
}

int main(){
	int i,sz[6],rev[6];
	for(i=0;i<6;i++)
		scanf("%d",&sz[i]);
	for(i=0;i<6;i++){
		if(sz[i]<0){
			sz[i]=-sz[i];
			rev[i]=reverse(sz[i]);
			printf("-%d\n",rev[i]);
		}else{
			rev[i]=reverse(sz[i]);
			printf("%d\n",rev[i]);
		}
	}
	return 0;
}