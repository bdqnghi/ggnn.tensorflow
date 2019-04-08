
double F(int r);
int main(){    
	int m,n[100],i,r;
	double result;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
    for(i=0;i<m;i++){
		r=n[i];
		result=F(r);
		printf("%.3lf\n",result);
	}
	return 0;
}
double F(int r){
	int j;
	double fz,fm,n1=1.0,n2=2.0,n3=3.0,h=3.500;
	if(r==1)
		return 2.000;
	if(r==2)
		return 3.500;
	for(j=1;j<r-1;j++){
		fz=n2+n3;
		fm=n1+n2;
		h=h+fz/fm;
		n1=n2;
		n2=n3;
		n3=fz;
	}
	return h;
}
