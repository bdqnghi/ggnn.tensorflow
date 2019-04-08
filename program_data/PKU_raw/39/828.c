
int main() {
	struct stu1{
		char name[30];
		int scor;
		int grad;
		char as;
		char xi;
		int num;
		int reward;
	} stu[100], temp;
	int n, i, re=0;
		char hhh;
	scanf("%d" ,&n);
	for(i=0;i<n;i++) {
		scanf("%s%d%d%c%c%c%c%d", stu[i].name, &stu[i].scor, &stu[i].grad, &hhh,&stu[i].as,&stu[i].xi,&stu[i].xi, &stu[i].num);
		stu[i].reward=0;
		if(stu[i].scor>80&&stu[i].num>=1) {
			stu[i].reward+=8000;
		}
		if(stu[i].scor>85&&stu[i].grad>80) {
			stu[i].reward+=4000;
		}
		if(stu[i].scor>90) {
			stu[i].reward+=2000;
		}
		if(stu[i].scor>85&&stu[i].xi=='Y') {
			stu[i].reward+=1000;
		}
		if(stu[i].grad>80&&stu[i].as=='Y') {
			stu[i].reward+=850;
		}
	}
	temp=stu[0];
	for(i=0;i<n;i++) {
		if(stu[i].reward>temp.reward) {
			temp=stu[i];
		}
	}
	for(i=0;i<n;i++) {
			re+=stu[i].reward;
		}

	printf("%s\n%d\n%d", temp.name, temp.reward, re);
	return 0;
}
