int main()
{
	void saima(int *tian,int *qi,int n);
	int n,i,k,tianji[1000],qiwang[1000];
	int *tian,*qi;
	tian=tianji;
	qi=qiwang;
	for(k=0;;k++){
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",tian+i);
		for(i=0;i<n;i++)
			scanf("%d",qi+i);
		saima(tian,qi,n);
	}
	return 0;
}

void saima(int *tian,int *qi,int n)
{
	int i,k,e,sheng=0,ping=0,shu=0,money;
	for(i=n-1;i>=0;i--){
		for(k=0;k<i;k++){
			if(*(tian+k)>*(tian+k+1)){
				e=*(tian+k);
				*(tian+k)=*(tian+k+1);
				*(tian+k+1)=e;
			}
			if(*(qi+k)>*(qi+k+1)){
				e=*(qi+k);
				*(qi+k)=*(qi+k+1);
				*(qi+k+1)=e;
			}
		}
	}
	for(i=0;i<n;i++){
		if(*(tian+i)!=-1){
			for(k=n-1;k>=0;k--){
				if(*(tian+i)>*(qi+k)&&*(qi+k)!=-1){
					sheng=sheng+1;
					*(tian+i)=-1;
					*(qi+k)=-1;
					k=-1;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(*(tian+i)!=-1){
			for(k=n-1;k>=0;k--){
				if(*(tian+i)==*(qi+k)&&*(qi+k)!=-1){
					ping=ping+1;
					*(tian+i)=-1;
					*(qi+k)=-1;
					k=-1;
				}
			}
		}
	}
	money=200*(sheng-(n-sheng-ping));
	printf("%d\n",money);
}