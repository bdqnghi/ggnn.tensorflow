struct grade
{
	int num;
	int chinese;
	int math;
	int all;
}stu[100000];
int main()
{
	int n,i,e,f,g,a,b,c;
	e=0;
	f=0;
	g=0;
	a=0;
	b=0;
	c=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
		stu[i].all=stu[i].chinese+stu[i].math;
	}
	for(i=0;i<=n-1;i++){
		if(stu[i].all>e){
			e=stu[i].all;
			a=i;
		}
	}
	for(i=0;i<=n-1;i++){
		if(stu[i].all<=e&&stu[i].all>f&&i!=a){
			f=stu[i].all;
			b=i;
		}
	}
	for(i=0;i<=n-1;i++){
		if(stu[i].all<=f&&stu[i].all>g&&i!=a&&i!=b){
			g=stu[i].all;
			c=i;
		}
	}
	printf("%d %d\n",stu[a].num,stu[a].all);
	printf("%d %d\n",stu[b].num,stu[b].all);
	printf("%d %d\n",stu[c].num,stu[c].all);
	return 0;
}