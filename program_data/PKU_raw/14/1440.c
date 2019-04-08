
int main(){
	int n;
	scanf("%d",&n);
	struct score{
		int id;
		int yw;
		int sx;
	} stu [100000];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&stu[i].id,&stu[i].yw,&stu[i].sx);
	}
	for(j=1;j<=3;j++){
		int e,max=0;
		for(i=0;i<=n-j;i++){
			if((stu[i].yw+stu[i].sx)>(stu[max].yw+stu[max].sx)){
				max=i;
			}
		}
		if(max!=n-j){
			e=stu[max].yw;
			stu[max].yw=stu[n-j].yw;
			stu[n-j].yw=e;

			e=stu[max].sx;
			stu[max].sx=stu[n-j].sx;
			stu[n-j].sx=e;

			e=stu[max].id;
			stu[max].id=stu[n-j].id;
			stu[n-j].id=e;
		}
	}
	for(i=n-1;i>=n-2;i--){
		printf("%d %d\n",(stu[i].id),(stu[i].yw+stu[i].sx));
	}
	printf("%d %d",(stu[n-3].id),(stu[n-3].yw+stu[n-3].sx));
	return 0;
}