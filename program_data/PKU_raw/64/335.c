struct suanshi{
	int a[3],b[3];
	int no;
	float x;
}dian[45];
int cmp(const void *a,const void *b){
	struct suanshi *aa=(struct suanshi *)a;
	struct suanshi *bb=(struct suanshi *)b;
	if((aa->x)<(bb->x))return 1;
	if((aa->x)>(bb->x))return -1;
	else return (aa->no)-(bb->no);
}
void main(){
	int point[11][3];
	int n,i,j,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d%d%d",&point[i][0],&point[i][1],&point[i][2]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			dian[t].no=t+1;
			dian[t].a[0]=point[i][0];dian[t].a[1]=point[i][1];dian[t].a[2]=point[i][2];
			dian[t].b[0]=point[j][0];dian[t].b[1]=point[j][1];dian[t].b[2]=point[j][2];
			dian[t].x=sqrt((point[i][0]-point[j][0])*(point[i][0]-point[j][0])+(point[i][1]-point[j][1])*(point[i][1]-point[j][1])+(point[i][2]-point[j][2])*(point[i][2]-point[j][2]));
			t++;
		}
	}
	for(j=0;n>0;){
		n--;
		j+=n;
	}
	qsort(dian,j,sizeof(struct suanshi),cmp);
	for(i=0;i<j;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dian[i].a[0],dian[i].a[1],dian[i].a[2],dian[i].b[0],dian[i].b[1],dian[i].b[2],dian[i].x);
}