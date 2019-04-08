int main(){
    int w,i,b,c;
	scanf("%d",&w);
	int sz[12];
	sz[0]=13;
	sz[1]=44;
	sz[2]=72;
	sz[3]=103;
	sz[4]=133;
	sz[5]=164;
	sz[6]=194;
	sz[7]=225;
	sz[8]=256;
	sz[9]=286;
	sz[10]=317;
	sz[11]=347;
	if(w==1){
		c=5;
	}
	if(w==2){
		c=4;
	}
	if(w==3){
		c=3;
	}
	if(w==4){
		c=2;
	}
	if(w==5){
		c=1;
	}
	if(w==6){
		c=0;
	}
	if(w==7){
		c=6;
	}
	for(i=0;i<12;i++){
		b=sz[i]%7;
		if(b==c){
			printf("%d\n",i+1);
		}
	}
    	








	return 0;
}




