int main(){
int n,i,a[200],b[200],s=0,t=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d%d",&(a[i]),&(b[i]));
}
for(i=0;i<n;i++){
	if(a[i]==0){
		if(b[i]==1){
			s++;
		}else if(b[i]==2){
			t++;
		}
	}
	else if(a[i]==1){
		if(b[i]==0){
			t++;
		}else if(b[i]==2){
			s++;
		}
	}
	else if(a[i]==2){
		if(b[i]==0){
			s++;
		}else if(b[i]==1){
			t++;
		}
	}
}
if(s>t){
	printf("A");
}
else if(s<t){
	printf("B");
}
else if(s=t){
	printf("Tie");
}
		return 0;
}