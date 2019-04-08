struct stu{
	char name[20];
	int s1;
	int s2;
	char gb;
	char we;
	int lw;
	int jj;
}stu[100];
int main()
{
	int n,i,s=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].gb,&stu[i].we,&stu[i].lw);
	for(i=0;i<n;i++){stu[i].jj=0;
		if(stu[i].s1>80&&stu[i].lw>=1)
			stu[i].jj+=8000;
		if(stu[i].s1>85&&stu[i].s2>80)
			stu[i].jj+=4000;
		if(stu[i].s1>90)
			stu[i].jj+=2000;
		if(stu[i].s1>85&&stu[i].we=='Y')
			stu[i].jj+=1000;
		if(stu[i].s2>80&&stu[i].gb=='Y')
			stu[i].jj+=850;
		s+=stu[i].jj;
		if(stu[i].jj>max) max=stu[i].jj;
	}
	for(i=0;i<n;i++)
		if(stu[i].jj==max){
			printf("%s\n%d\n",stu[i].name,stu[i].jj);
			break;
		}
	printf("%d",s);
    return 0;
}
