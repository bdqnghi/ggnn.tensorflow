int pb(int n);
int main(){
int i,a,n,k,s[1000];
scanf("%d",&k);
for(i=0;i<k;i++){

scanf("%d",&n);
s[i]=pb(n);
}


for(i=0;i<k;i++){
printf("%d\n",s[i]);
}
return 0;
}


int pb(int m){
	
	int sz[100000];
	sz[1]=1;sz[2]=1;
	for(int i=3;i<=m;i++){
	sz[i]=sz[i-1]+sz[i-2];
	}
return sz[m];
}