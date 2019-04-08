int main(){
    int q[10000];
    int m[10000];
	int i,h,a,b=0,p,s=0;
	double l;
	scanf("%d",&h);
	for (i=0;i<h;i++){
	scanf("%d%d",&q[i],&m[i]);
	}
    a=q[0];
	for(i=0;i<h;i++){
 		if (q[i]<a){
 			a=q[i];
 		}
 		}
 	for(i=0;i<h;i++){
 		if (m[i]>b){
 			b=m[i];
 		}
 		}
 	for(l=a+0.5;l<b;l++){
 		p=0;
 		for(i=0;i<h;i++){
 			if((l>=q[i])&&(l<=m[i])){
 				p++;
 			}
 		}
 		if(p>0)
 		s++;
 	}
    if(s==b-a){
 		printf("%d %d\n",a,b);
 	}else{
 	printf("no");
 	}
    return 0;
}
