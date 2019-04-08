int F(int n); 
int main(){
int m,n;
scanf("%d",&m);
int i;
double S;
int result1,result2,j;
for(j=1;j<=m;j++){
	S=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   result1=F(i+2);
	   result2=F(i+3);
	   S+=(double)result2/result1;
	}
	printf("%.3lf\n",S);
}

return 0;
}
int F(int n){
int i;
int *result=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++){
	if(i==0||i==1){
	result[i]=1;
	}
	if(i>1){
	result[i]=result[i-1]+result[i-2];
	}
}
int t;
t=result[n-1];
free(result);
return t;
}
