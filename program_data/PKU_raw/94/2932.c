int main(){
int maxIndex, e,LEN,k,i;
int sz[1000],js[1000];
scanf("%d",&LEN);
for(i=0;i<LEN;i++){
scanf("%d", &sz[i]);
}
for(int k  =   1  ;   k <=   LEN; k++){
	maxIndex = 0;
	for(int i = 0; i <= LEN-k; i++){
			if(sz[i] > sz[maxIndex]){
					maxIndex = i;
			}
	}	
	if(maxIndex != LEN-k){
		e = sz[maxIndex];
		sz[maxIndex] = sz[LEN-k];
		sz[LEN-k] =  e;
	}
}
k=0;
for(i=0;i<LEN;i++){
if(sz[i]%2!=0){
js[k]=sz[i];
k++;
}
}
if(k<2){
for(i=0;i<k;i++){
printf("%d",js[i]);
}
}
if(k>1){
for(i=0;i<k-1;i++){
printf("%d,",js[i]);
}
printf("%d",js[k-1]);
}
return 0;
}