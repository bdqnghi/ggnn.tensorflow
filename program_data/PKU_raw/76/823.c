int main(){
	int n,start[50000],end[50000],st=10000,e=0,i,point=0;
	double j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&start[i],&end[i]);
		if(start[i]<st){st=start[i];}
		if(end[i]>e){e=end[i];}}
	for(j=st+0.5;j<e;j++){
		for(i=0;i<n;i++){
			if(j>start[i]&&j<end[i]){
				point++;
				break;}}}
	if(point==e-st){printf("%d %d",st,e);}
	else{printf("no");}
	return 0;
}