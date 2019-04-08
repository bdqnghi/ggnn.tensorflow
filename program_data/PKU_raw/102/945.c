int main(){
	int n,i,k;
	double H;
	scanf("%d",&n);
	struct xs{
		char zfc[12];
		double h;
	}xs[41];
	for(i=0;i<n;i++){
	    scanf("%s %lf",xs[i].zfc,&xs[i].h);
	}
	char c;
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(xs[i].h>xs[i+1].h){
                c=xs[i].zfc[0];
                xs[i].zfc[0]=xs[i+1].zfc[0];
				xs[i+1].zfc[0]=c;
				H=xs[i].h;
				xs[i].h=xs[i+1].h;
				xs[i+1].h=H;
			}
		}
	}
	int d=0;
	for(i=0;i<n;i++){
		if(xs[i].zfc[0]=='m'){
		     	printf("%.2lf ",xs[i].h);
				d++;
		} 
	}     
    for(i=n-1;i>=0;i--){
		if(d==n-1){
			if(xs[i].zfc[0]=='f'){
               printf("%.2lf",xs[i].h);
			   d++;
			}
		}
		else{
		    if(xs[i].zfc[0]=='f'){
			  printf("%.2lf ",xs[i].h);
			  d++;
			}
		}
	}
	return 0;
}




