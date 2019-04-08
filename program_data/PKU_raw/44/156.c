int reverse(int n)
{
	int sw[10],sz[10];
	int i,wei=10,result=0;
	if(n>0){
		for(i=0;i<10;i++){
			sw[i]=(int)(pow(10,i));
		}
		sz[9]=n/sw[9];
		for(i=8;i>=0;i--){
			sz[i]=n%sw[i+1]/sw[i];
		}
		for(i=9;i>=0;i--){
			if(sz[i]==0){
				wei--;
			}else{
				break;
			}
		}
		for(i=0;i<wei;i++){
			result+=sz[i]*sw[wei-i-1];
		}
	}
	else if(n==0){
		result=0;
	}
	else if(n<0){
		n=-n;
		for(i=0;i<10;i++){
			sw[i]=(int)(pow(10,i));
		}
		sz[9]=n/sw[9];
		for(i=8;i>=0;i--){
			sz[i]=n%sw[i+1]/sw[i];
		}
		for(i=9;i>=0;i--){
			if(sz[i]==0){
				wei--;
			}else{
				break;
			}
		}
		for(i=0;i<wei;i++){
			result+=sz[i]*sw[wei-i-1];
		}
		result=-result;
	}
	return result;
}
int main()
{
	int num,i;
	int reverse(int n);
	for(i=0;i<6;i++){
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
	return 0;
}