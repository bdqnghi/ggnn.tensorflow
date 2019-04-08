
int main(){
	int sz[100],sz1[100],n;
	float sz2[100];
	scanf("%d",&n);

	int x,y;
	float z;
	scanf("%d%d",&x,&y);
	z = (float)y/x;

	int i=0;
	while(i<n-1){
		scanf("%d%d",&(sz[i]),&(sz1[i]));
		sz2[i]=(float)(sz1[i])/(sz[i]);
		i++;
	}

	i=0;
	while(i<n-1){
		if((sz2[i]-z)>0.05){
			printf("better\n");
		}else if((z-sz2[i])>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
		i++;
	}

	return 0;

}