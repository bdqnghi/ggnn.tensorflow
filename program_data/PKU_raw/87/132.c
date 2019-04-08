int main(){
	int h1[MAX],h2[MAX],m1[MAX],m2[MAX],s1[MAX],s2[MAX];
	int second[MAX];
	int a,b,c;
	int i,p=0;
	for(i=0;i<MAX;i++){
		scanf("%d %d %d %d %d %d",&h1[i],&m1[i],&s1[i],&h2[i],&m2[i],&s2[i]);
		if(h1[i]==0&&m1[i]==0&&s1[i]==0&&h2[i]==0&&m2[i]==0&&s2[i]==0){
			break;
		}
		h2[i]=h2[i]+12;
		a=(h2[i]-h1[i]-1)*60*60;
		
		b=(60-m1[i]-1)*60;
		
		c=60-s1[i];
		
		second[i]=a+b+c+(m2[i]*60)+s2[i];
		p++;
	}
	for(i=0;i<p;i++){
		printf("%d\n",second[i]);
	}

	return 0;
}