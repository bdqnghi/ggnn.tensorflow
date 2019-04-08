
int main(int argc, char* argv[])
{
	struct people{
		char a[10];
		int year;
	};
	struct people b[100],c[100],d[100],v[100];//yuan  hou
	for(int h=0;h<=99;h++){
		for(int p=0;p<=9;p++){
			b[h].a[p]=	c[h].a[p]=	d[h].a[p]=	v[h].a[p]=0;}
	}
		
	int n,t=0,k=0,o;//lao ren shu
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %d",&b[i].a,&b[i].year);
		if(b[i].year>=60){
			t++;
			v[t]=b[i];}
		else{
			k++;
			d[k]=b[i];}
	}
	for(int j=1;j<=t;j++){
				     o=0;
		for(int u=1;u<=t;u++){

			if(v[u].year>v[j].year){
				o++;}
			if(v[u].year==v[j].year&&u<j){
				o++;}
		}
		c[o+1]=v[j];
	}
	for(int l=1;l<=k;l++){
		c[t+l]=d[l];}
	for(int x=1;x<=n;x++){
		printf("%s\n",c[x].a);}

	return 0;
}

