struct student
{
	int num;
	int yw;
	int sx;
	int zong;
}stu[100001];

int main(int argc, char* argv[])
{
	int i,n,max1=0,max2=0,max3=0,fir,sec,thi;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d %d",&stu[i].num,&stu[i].yw,&stu[i].sx);
		stu[i].zong=stu[i].yw+stu[i].sx;
		if(stu[i].zong>max1){
			max3=max2;
			thi=sec;
			max2=max1;
			sec=fir;
			max1=stu[i].zong;
			fir=i;
		}else if(stu[i].zong>max2){
			max3=max2;
			thi=sec;
			max2=stu[i].zong;
			sec=i;
		}else if(stu[i].zong>max3){
			max3=stu[i].zong;
			thi=i;
		}
	}

	printf("%d %d\n",stu[fir].num,stu[fir].zong);
	printf("%d %d\n",stu[sec].num,stu[sec].zong);
	printf("%d %d\n",stu[thi].num,stu[thi].zong);
	return 0;
}

