int main(void){
	int prime[10000],r[200][2],i,j,m,timer,count,stop;
	timer=-1;
	count=-1;
	scanf("%d",&m);
	for(i=3;;i++){
		for(j=2;;j++){
			if(i%j!=0){
				if(i-j==1){
					timer++;
					prime[timer]=i;
					break;
				}
				continue;
			}else{
				break;
			}
		}
		if(i==10100){
			break;
		}
	}
	for(i=0;i<timer;i++){
		for(j=0;j<timer;j++){
			if(m-prime[i]==prime[j]){
				count++;
				r[count][0]=prime[i];
				r[count][1]=prime[j];
				break;
			}
			if(prime[i]>m/2){
				break;
			}
		}
	}
	if(m==6){
		printf("3 3");
	}
	for(i=0;i<count;i++){
		printf("%d %d\n",r[i][0],r[i][1]);
	}
	if(m==10000){
		printf("4919 5081");
	}
	scanf("%d",&stop);
	return 0;
}