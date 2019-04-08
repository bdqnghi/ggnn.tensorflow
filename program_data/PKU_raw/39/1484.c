struct person{
	char pname[30];
	int s1,s2,s3;
	char c1,c2;
	int money;
};
int main(){
	struct person p[100];
	int n,m,i,j,k;
	long tot;
	for(i=0;i<100;i++){
		p[i].s1=0;
		p[i].s2=0;
		p[i].s3=0;
		p[i].money=0;
	}
	scanf("%d",&n);
	k=0;
	tot=0;
	for(i=0;i<n;i++){
		scanf("%s%d%d %c %c %d",p[i].pname,&p[i].s1,&p[i].s2,&p[i].c1,&p[i].c2,&p[i].s3);
		if(p[i].s1>80&&p[i].s3>=1)
			p[i].money+=8000;
		if(p[i].s1>85&&p[i].s2>80)
			p[i].money+=4000;
		if(p[i].s1>90)
			p[i].money+=2000;
		if(p[i].s1>85&&p[i].c2=='Y')
			p[i].money+=1000;
		if(p[i].s2>80&&p[i].c1=='Y')
			p[i].money+=850;
		tot+=p[i].money;
		if(p[i].money>p[k].money)
			k=i;
	}
	printf("%s\n%d\n%d\n",p[k].pname,p[k].money,tot);
	return 0;
}
