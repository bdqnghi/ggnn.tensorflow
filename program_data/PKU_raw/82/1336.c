int main(){
	int n,i,m=0,j=0;
	struct p{
		int u,v;
	}p[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&p[i].u,&p[i].v);
		if(p[i].u>=90&&p[i].u<=140&&p[i].v>=60&&p[i].v<=90){
			j=j+1;
			if(j>m)
				m=j;
		}
		else{
			j=0;
		}
	}
	printf("%d",m);
	return 0;
}