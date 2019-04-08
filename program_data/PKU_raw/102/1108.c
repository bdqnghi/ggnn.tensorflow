int main (){
	int n,a=0,b=0;
	double sz[40],men[40],wo[40],x,y;
	char sx[40][7];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %lf",sx[i],&sz[i]);
		if(strcmp(sx[i],"male")==0){
			men[a]=sz[i];
			a++;
		}else{
			wo[b]=sz[i];
			b++;
		}
	}
	for(int c=1;c<=a;c++){
		for(int d=0;d<a-c;d++){
			if(men[d]>men[d+1]){
				x=men[d+1];
				men[d+1]=men[d];
				men[d]=x;
			}
		}
	}
    for(int v=1;v<=b;v++){
		for(int q=0;q<b-v;q++){
			if(wo[q]>wo[q+1]){
				y=wo[q+1];
				wo[q+1]=wo[q];
				wo[q]=y;
			}
		}
	}
	for(int df=0;df<a;df++){
		printf("%.2lf ",men[df]);
	}
	for(int se=b-1;se>0;se--){
		printf("%.2lf ",wo[se]);
	}
	printf("%.2lf",wo[0]);
	return 0;
}