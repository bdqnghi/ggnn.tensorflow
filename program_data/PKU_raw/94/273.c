int main(){
	int s[10000],st[10000];
	int N;
	scanf("%d",&N);
	int j=0;
	for(int ii=0;ii<N;ii++){
	scanf("%d",&s[ii]);
	if(s[ii]%2!=0){
	st[j]=s[ii];
	j++;
	}
	}
int e;
for(int k = 1 ; k <= j ; k++){
	for(int i = 0; i < j- k; i++){
			if(st[i] > st[i+1]){
					e = st[i+1];
					st[i+1] = st[i];
					st[i] = e;
			}
	}
}
for(int h=0;h<j-1;h++){
printf("%d,",st[h]);
}
printf("%d",st[j-1]);
return 0;
}