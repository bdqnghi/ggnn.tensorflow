struct mark
{
	int num;
	int ch;
	int math;
	int sum;
}stu[100000];
int main(int argc, char* argv[])
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].num,&stu[i].ch,&stu[i].math);
		stu[i].sum=stu[i].math+stu[i].ch;
	}
	for(i=0;i<n-1;i++){
		if(stu[i].sum>=stu[i+1].sum){
			stu[100000]=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=stu[100000];
		}
	}
	for(i=0;i<n-2;i++){
		if(stu[i].sum>=stu[i+1].sum){
			stu[100000]=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=stu[100000];
		}
	}
	for(i=0;i<n-3;i++){
		if(stu[i].sum>=stu[i+1].sum){
			stu[100000]=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=stu[100000];
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",stu[n-1].num,stu[n-1].sum,stu[n-2].num,stu[n-2].sum,stu[n-3].num,stu[n-3].sum);
	return 0;
}
