
int main(){
	int m,n,i,k,s=0,p,q;
	double c[45];
    double e;
	double d[10][3];
	scanf("%d",&n);
	for(m=0;m<n;m++){
		for(i=0;i<3;i++){
		scanf("%lf",&(d[m][i]));
		}
	}
for(m=0;m<n;m++){
	for(k=m+1;k<n;k++){
	c[s]=sqrt((d[m][0]-d[k][0])*(d[m][0]-d[k][0])+(d[m][1]-d[k][1])*(d[m][1]-d[k][1])+(d[m][2]-d[k][2])*(d[m][2]-d[k][2]));
	s=s+1;
	}}
for(p=1;p<=s;p++){
for(i=0;i<s-p;i++){

	if(c[i]>c[i+1]){
	e=c[i+1];
	c[i+1]=c[i];
	c[i]=e;
	}
}}

for(q=s-1;q>=0;q--){
	
for(m=0;m<n;m++){
	for(k=m+1;k<n;k++){
	if(sqrt((d[m][0]-d[k][0])*(d[m][0]-d[k][0])+(d[m][1]-d[k][1])*(d[m][1]-d[k][1])+(d[m][2]-d[k][2])*(d[m][2]-d[k][2]))==c[q]){
  printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", d[m][0], d[m][1], d[m][2], d[k][0],d[k][1], d[k][2],c[q]);
	}
	
	}
}
for(p=q;p>0;p=p-1){
	if(c[p]==c[p-1]){
		q=q-1;
	
	
	}
	else break;
}
}

return 0;
}
