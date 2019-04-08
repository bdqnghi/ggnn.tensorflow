int main(){
	int n;
	scanf("%d",&n);
	struct point{
		int a,b;
	}
	sz[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&sz[i].a,&sz[i].b);
	}
	int xsz[100]={0};
	int j;
	for(i=0;i<n;i++){
		if(sz[i].a>=90&&sz[i].a<=140&&sz[i].b>=60&&sz[i].b<=90){
			xsz[i]+=1;
			for(j=i+1;j<n;j++){
				if(sz[j].a>=90&&sz[j].a<=140&&sz[j].b>=60&&sz[j].b<=90){
					xsz[i]+=1;
				}else{
					break;
				}
			}
		}
	}
	int max=0;
	for(i=0;i<n;i++){
		if(xsz[i]>max){
			max=xsz[i];
		}
	}
	printf("%d\n",max);
	return 0;
}


