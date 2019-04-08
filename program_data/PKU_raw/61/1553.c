
int main(){
int n,i,a,d,k,p,q;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a);
	p=1;
	q=1;
	if(a==1||a==2){
		printf("%d\n",q);
	}
	else if(a>2){
		for(k=0;k<a-2;k++){
		d=p+q;
		p=q;
		q=d;
		}
     	printf("%d\n",q);

	}
}
 return 0;
}