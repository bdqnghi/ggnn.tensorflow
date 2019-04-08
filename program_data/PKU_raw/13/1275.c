int main(){
	int n,i,j,timer,k,k0;
	timer=0;
	k0=0;
	k=-1;
	int l[100000],r[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&l[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(l[i]==l[j]){
				l[j]=10000;
			}
		}
	}
	for(i=0;i<n;i++){
		if(l[i]==10000){
			timer++;
		}
	}
//	printf("n-t=%d",n-timer);
	for(i=0;i<n;i++){
		if(l[i]!=10000){
//			printf("%d\n",l[i]);
			k0++;
			k++;
			r[k]=l[i];
		}else{
			continue;
		}
	}
	for(i=0;i<k0;i++){
		if(k==0){
			printf("%d",r[i]);
		}else if(k!=0&&i<k0-1){
			printf("%d ",r[i]);
		}else if(i==k0-1){
			printf("%d",r[i]);
		}
	}
	return 0;
}
