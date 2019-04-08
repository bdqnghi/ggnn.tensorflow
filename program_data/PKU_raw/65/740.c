int main(){
int n,i,p,q,a[1000],b[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
p=0;
q=0;
for(i=0;i<n;i++){
	if(a[i]==0){
		if(b[i]==1){
		p++;
		} else{
		if(b[i]==2)
			q++;
		}
	}else{
		if(a[i]==1){
			if(b[i]==0){
			q++;
			}else{
			if(b[i]==2)
				p++;
			}
		}else{
			if(a[i]==2){
				if(b[i]==0){
				p++;
				}else{
				if(b[i]==1)
					q++;
				}
			}
		}
	}
}
if(p>q){
printf("A");
}else{
	if(p<q){
	printf("B");
	}else{
	if(p==q)
		printf("Tie");
	}
}

return 0;
}