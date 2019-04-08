
void sort(int *array,int max){
	for(int i=0;i<max-1;i++){
		for(int j=i+1;j<max;j++){
			if(*(array+i)<*(array+j)){
				int temp=*(array+i);
				*(array+i)=*(array+j);
				*(array+j)=temp;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	while(n){
		int tianji[n],qiwang[n];
		for(int i=0;i<n;i++){
			scanf("%d",&tianji[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&qiwang[i]);
		}
		sort(tianji,n);
		sort(qiwang,n);
		
		int tfirst=0,qfirst=0;
		int tlast=n-1,qlast=n-1;
		int j=0;
		int win=0;
		int lose=0;
		
		while(j<n){
			if(tianji[tfirst]>qiwang[qfirst]){
				win++;
				tfirst++;
				qfirst++;
			}
			else if(tianji[tfirst]<qiwang[qfirst]){
				lose++;
				tlast--;
				qfirst++;
			}
			else{
				if(tianji[tlast]>qiwang[qlast]){
					win++;
					tlast--;
					qlast--;
				}
				else{
					if(tianji[tlast]<qiwang[qfirst])lose++;
					tlast--;
					qfirst++;
				}
			}
			j++;
		}
		
		printf("%d\n",win*200-lose*200);
		
		scanf("%d",&n);
	}
}