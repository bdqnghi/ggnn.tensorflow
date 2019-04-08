
int result(int n,int tianji[1000],int qiwang[1000]){
	int i,k,e,m=0,sum=0,tailt,tailq,a,b;

	tailt=tailq=n-1;

	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(tianji[i]<tianji[i+1]){
				e=tianji[i];
				tianji[i]=tianji[i+1];
				tianji[i+1]=e;
			}
		}
	}

	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(qiwang[i]<qiwang[i+1]){
				e=qiwang[i];
				qiwang[i]=qiwang[i+1];
				qiwang[i+1]=e;
			}
		}
	}

	for(i=0;i<n;i++){
		if(tianji[m]>qiwang[i]){
			m++;
			sum+=200;
		}else if(tianji[m]<qiwang[i]){
			sum-=200;
			tailt--;
		}else if(tianji[m]==qiwang[i]){
			for(a=tailt,b=tailq;a>=m;a--,b--){
				if(tianji[a]>qiwang[b]){
					sum+=200;
					tailt--;
					tailq--;
				}else if(tianji[a]<qiwang[b]){
					sum-=200;
					tailt--;
					break;
				}else if(tianji[a]==qiwang[b]){
					if(tianji[tailt]<qiwang[i]){
						sum-=200;
					}
					tailt--;
					
					break;
				}
			}
		}
		if(m>tailt){
			break;
		}
	}
	return sum;
}


int main(){
	int n,tianji[1000],qiwang[1000],i,j,sum;

	for(i=0;;i++){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(j=0;j<n;j++){
			scanf("%d",&tianji[j]);
		}
		for(j=0;j<n;j++){
			scanf("%d",&qiwang[j]);
		}
		sum=result(n,tianji,qiwang);
		printf("%d\n",sum);
	}



	return 0;
}
