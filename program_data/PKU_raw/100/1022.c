int main () {
	char as[300];
	scanf("%s",as);
	int sz[300]={0};
	int len=strlen(as);
	char sd[300],df[300];

    int e=0;
	for(int i=0;i<len;i++){
	    int w=as[i];
	    if((w<=122)&&(w>=97)){
		    sd[e]=as[i];
			e++;
		}
	}
	for(int s=1;s<=e;s++){
		for(int q=0;q<e-s;q++){
			int m,n;
			char y;
			m=sd[q];n=sd[q+1];
			if(m>n){
				y=sd[q];
				sd[q]=sd[q+1];
				sd[q+1]=y;
			}
		}
	}
    if(e!=0){
    df[0]=sd[0];sz[0]=1;
	int t=0;
	for(int k=1;k<e;k++){
		char r=sd[k];
		int a=0;
		int d;
		for(int j=0;j<=t;j++){
			if(r==df[j]){

				a++;
				d=j;
			}
		}
			if(a!=0){
				sz[d]++;
			}else {
				t++;
				df[t]=r;
				sz[t]++;
			}
		}
	
	for(int h=0;h<=t;h++){
		printf("%c=%d\n",df[h],sz[h]);
	}
	}
	if(e==0){
		printf("No");
	}
	return 0;
}