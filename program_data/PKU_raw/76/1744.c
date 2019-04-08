int main(){
int n,k,i,e1,e2,t,max;
struct{
	int a;int b;
	}p[60000];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&p[i].a,&p[i].b);
	}
for(k=1;k<=n;k++){
	for(i=0;i<n-k;i++){
		if(p[i].a>p[i+1].a){
			e1=p[i+1].a;
			p[i+1].a=p[i].a;
			p[i].a=e1;
			e2=p[i+1].b;
			p[i+1].b=p[i].b;
			p[i].b=e2;
			}
		}
	}
for(i=1;i<n;i++){
	for(t=0;t<i;t++){
		if(p[i].a<=p[t].b)
			break;
		while(t==i-1){
			if(p[i].a>p[t].b){
				printf("no");
				return 0;
				}
			}
		}
	}
max=0;
for(i=0;i<n;i++){
if(p[i].b>max)
max=p[i].b;
}
printf("%d %d",p[0].a,max);
return 0;
}