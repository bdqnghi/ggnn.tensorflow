int main(){
	int q[1000],w[1000],e[1000],r[1000],t[1000],y[1000];
	int sum[1000];
	int a,s,d,f,g,h,i=0,j;
	scanf("%d %d %d %d %d %d",&a,&s,&d,&f,&g,&h);
	while((a!=0)||(s!=0)||(d!=0)||(f!=0)||(g!=0)||(h!=0)){
     	q[i]=(11-a)*3600;
		w[i]=(59-s)*60;
		e[i]=60-d;
		r[i]=3600*f;
		t[i]=60*g;
		y[i]=h;
		sum[i]=q[i]+w[i]+e[i]+r[i]+t[i]+y[i];
		i++;
		scanf("%d %d %d %d %d %d",&a,&s,&d,&f,&g,&h);
	}
	for(j=0;j<i;j++){
		printf("%d\n",sum[j]);
	}
	return 0;
}
