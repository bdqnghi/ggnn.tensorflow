int main(){

int n;
scanf("%d",&n);

int sz[100][2];
int panduan[100];
int i,j;
for(i=0;i<n;i++){
	for(j=0;j<2;j++){
	scanf("%d",&(sz[i][j]));
	
	}
}

for(i=0;i<n;i++){
	
	if((sz[i][0]>89&&sz[i][0]<141)&&(sz[i][1]>59&&sz[i][1]<91)){
	panduan[i]=1;
	}
	else {panduan[i]=0;
	}
}

int cx[100]={0};
int e=0;
for(i=0;i<n;i++){
	if(panduan[i]==1){
	cx[e]++;
	}
	else if(panduan[i]==0){
	e++;
	}
}

int k,a,t;	
for(k=1;k<100;k++){
	for(t=0;t<100-k;t++){
		if(cx[t]<cx[t+1]){
		a=cx[t+1];
		cx[t+1]=cx[t];
		cx[t]=a;
		}
	}
}	
	
printf("%d",cx[0]);

return 0;
}