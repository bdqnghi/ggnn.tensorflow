int main(){
	int*p;
	int a,i,j,k,y;
	int n[100],m[100],x[100];
	for(a=0;a<100;a++){
	scanf("%d%d",&n[a],&m[a]);
	if(n[a]==0&&m[a]==0){
		y=a;
		break;
	}
	}
	for(a=0;a<y;a++){
		p=(int*)malloc(sizeof(int[100])*n[a]);
		for(i=0;i<n[a];i++)
			p[i]=0;
		k=n[a];
		j=1;
		for(i=0;i<n[a];i=(i+1)%n[a])
		{
			if(p[i])
				continue;
			if(j++==m[a]){
				p[i]=1;
				k--;
				j=1;
			}
			if(k==0){
				x[a]=i+1;
				break;
			}
		}
	}
	for(int b=0;b<y;b++)
		printf("%d\n",x[b]);
	free(p);
	return 0;
}