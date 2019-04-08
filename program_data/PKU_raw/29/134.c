int main(){
double sum[100];
int a=1,b=2,c,d;
int n,i,j[100],k;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&j[i]);
}
for(i=0;i<n;i++){
	sum[i]=0;
	a=1;
	b=2;
	for(k=0;k<j[i];k++){
	sum[i]+=100000*b/a;
	c=b;
	d=a+b;
	a=c;
	b=d;
	}   
	printf("%.3lf\n",sum[i]/100000);
}



return 0;
}
