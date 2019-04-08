int main(){
int n,i;
scanf("%d",&n);
double m,p,c,q; 
for(i=0;i<n;i++){		
		scanf("%lf%lf",&m,&p);
		if(i==0){
	c=p/m;
		}
	else{
	q=p/m;
	if(q-c>0.05){
	printf("better\n");
	}
	else if(c-q>0.05){
	printf("worse\n");
	}
	else{
	printf("same\n");
	}
	}
	}
return 0;
}