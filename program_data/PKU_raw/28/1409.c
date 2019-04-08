int main(){
	char zfc[6000];
	gets(zfc);
	int i, j, k=1,len, num[305], time=0, sum=0, sum2=0;
	len=strlen(zfc);
	num[0]=0;
	for(i=0;i<len;i++){
		if(zfc[i]==' '){
			sum=sum+num[k-1];
			time++;
			while(zfc[i+1]==' '){
				time++;
				i++;
			}
			num[k]=i-time-sum+1;
			k++;
		}
	}
	for(i=0;i<k;i++){
		sum2+=num[i];
	}
	num[k]=len-time-sum2;
	for(i=1;i<k;i++){
		printf("%d,", num[i]);
	}
	printf("%d", num[k]);
	return 0;
}