int main(){
    int n;
	scanf("%d",&n);
	struct point{
		int a,b;
	}
	sz[200];
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&sz[i].a,&sz[i].b);
	}
	int x=0;
	for(i=0;i<n;i++){
		if(sz[i].a==1&&sz[i].b==0){
			x+=1;
		}
		if(sz[i].a==0&&sz[i].b==1){
			x-=1;
		}
		if(sz[i].a==2&&sz[i].b==0){
			x-=1;
		}
		if(sz[i].a==0&&sz[i].b==2){
			x+=1;
		}
		if(sz[i].a==1&&sz[i].b==2){
			x-=1;
		}
		if(sz[i].a==2&&sz[i].b==1){
			x+=1;
		}
	}

	if(x>0){
		printf("B\n");
	}
	else if(x==0){
		printf("Tie\n");
	}
	else if(x<0){
		printf("A\n");
	}
	return 0;
}