int main(int argc, char* argv[])
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0){
			break;
		}else{
			int qiwang[1000];
			int tianji[1000];
			int win[1000];
			int i,k;
			for(i=0;i<n;i++){
				scanf("%d",&tianji[i]);
			}
			for(i=0;i<n;i++){
				scanf("%d",&qiwang[i]);
			}
			int e;
			for(k=1;k<n;k++){
				for(i=0;i<n-k;i++){
					if(qiwang[i]<qiwang[i+1]){
						e=qiwang[i];
						qiwang[i]=qiwang[i+1];
						qiwang[i+1]=e;
					}
				}
			}
			for(k=1;k<n;k++){
				for(i=0;i<n-k;i++){
					if(tianji[i]<tianji[i+1]){
						e=tianji[i];
						tianji[i]=tianji[i+1];
						tianji[i+1]=e;
					}
				}
			}
			int get=0,j;
			int tianji1[1000];
			for(k=0;k<n;k++){
				for(i=0;i<n;i++){
					j=(i+k)%n;
					tianji1[i]=tianji[j];
				}
				for(i=0;i<n;i++){
					if(tianji1[i]>qiwang[i]){
						get=get+200;
					}else if(tianji1[i]<qiwang[i]){
						get=get-200;
					}
				}
				win[k]=get;
				get=0;
			}
			int max=win[0];
			for(i=0;i<n;i++){
				if(win[i]>max){
					max=win[i];
				}
			}
			printf("%d\n",max);
		}
	}
	return 0;
}