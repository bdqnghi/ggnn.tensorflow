int jh[365];
int xqj[365];
void dy(int *jh,int *xqj);
int main(){
	int i;
	for(i=0;i<31;i++){
		jh[i]=i+1;
	}
	for(i=31;i<59;i++){
		jh[i]=i-30;
	}
	for(i=59;i<90;i++){
		jh[i]=i-58;
	}
	for(i=90;i<120;i++){
		jh[i]=i-89;
	}
	for(i=120;i<151;i++){
		jh[i]=i-119;
	}
	for(i=151;i<181;i++){
		jh[i]=i-150;
	}
	for(i=181;i<212;i++){
		jh[i]=i-180;
	}
	for(i=212;i<243;i++){
		jh[i]=i-211;
	}
	for(i=243;i<273;i++){
		jh[i]=i-242;
	}
	for(i=273;i<304;i++){
		jh[i]=i-272;
	}
	for(i=304;i<334;i++){
		jh[i]=i-303;
	}for(i=334;i<365;i++){
		jh[i]=i-333;
	}
	int w;
	scanf("%d",&w);
	for(i=0;i<365;i++){
		xqj[i]=i+w;
		if(xqj[i]%7!=0){
			xqj[i]=xqj[i]%7;
		}else{
			xqj[i]=7;
		}
	}
	dy(jh,xqj);
	return 0;
}
void dy(int *jh,int *xqj){
	int i;
	int k=1;
	for(i=0;i<365;i++){
		
		if(jh[i]==13){
			
			if(xqj[i]==5){
				printf("%d\n",k);
			}
			k++;
		}
	}
}