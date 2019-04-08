double Q(int x);
int main(){
int m,p[100],i;
scanf("%d",&m);
for(i=1;i<=m;i++){
scanf("%d",&p[i]);
}
for(i=1;i<=m;i++){
printf("%.3lf\n",Q(p[i]));
}
return 0;
}
double Q(int x){
	double a=1.0,b=2.0,k,i,s=0;
	for(i=1;i<=x;i++){
	s+=b/a;
	k=a+b;
	a=b;
	b=k;
	}
	return s;
}