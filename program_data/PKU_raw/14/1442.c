
struct student
{
	int num;
	int chn;
	int math;
	int score;
} stu[100000];

main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&stu[i].num,&stu[i].chn,&stu[i].math);
		stu[i].score=stu[i].chn+stu[i].math;
	}

	if(stu[0].score>=stu[1].score){
		if(stu[1].score>=stu[2].score){
			a=0;
			b=1;
			c=2;
		}
		else if(stu[0].score>=stu[2].score){
			a=0;
			b=2;
			c=1;
		}
		else{
			a=2;
			b=0;
			c=1;
		}
	}
	else{
		if(stu[0].score>=stu[2].score){
			a=1;
			b=0;
			c=2;
		}
		else if(stu[1].score>=stu[2].score){
			a=1;
			b=2;
			c=0;
		}
		else{
			a=2;
			b=1;
			c=0;
		}
	}
	for(i=3;i<n;i++){
		if(stu[i].score>stu[a].score){
			c=b;
			b=a;
			a=i;
		}
		else if(stu[i].score>stu[b].score){
			c=b;
			b=i;
		}
		else if(stu[i].score>stu[c].score){
			c=i;
		}
	}

	printf("%d %d\n%d %d\n%d %d\n",stu[a].num,stu[a].score,stu[b].num,stu[b].score,stu[c].num,stu[c].score);
}