int main()
{
	int n;
	scanf("%d",&n);
	int i,k,b,h,c;
	int*shuzu=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
	}
	int a=0;
	int*shuzu_=(int*)malloc(sizeof(int)*n);
	for(k=0;k<n;k++){
		if(shuzu[k]%2!=0){
			shuzu_[a]=shuzu[k];
			a++;
		}
	}
	a=a;
	int g;
	for(b=1;b<=a;b++){
		int e=0;
		for(c=0;c<=a-b;c++){
			if(shuzu_[c]>shuzu_[e]){
				e=c;
			}
		}
		if(e!=a-b){
			g=shuzu_[a-b];
			shuzu_[a-b]=shuzu_[e];
			shuzu_[e]=g;
		}
	}
	for(h=0;h<a-1;h++){
		printf("%d,",shuzu_[h]);
	}
	if(h=a-1){
		printf("%d",shuzu_[a-1]);
	}
	return 0;
}