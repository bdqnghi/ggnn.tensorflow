int main(){
	int i,n;
	scanf("%d",&n);
	struct info{
		char name[20];
		int s;
	};
	struct info *p;
	
	p=(struct info *)malloc(sizeof(info)*n);
	

	char r,q;
	int f1,f2,f3;
	int sum=0;
	int t=0;
	int max=0;
	
	
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",(p+i)->name,&f1,&f2,&r,&q,&f3);
		p[i].s=0;
		if(f1>80&&f3>0)p[i].s+=8000;
		if(f1>85&&f2>80)p[i].s+=4000;
		if(f1>90)p[i].s+=2000;
		if(f1>85&&q=='Y')p[i].s+=1000;
		if(f2>80&&r=='Y')p[i].s+=850;
		sum+=p[i].s;
	}
	
	for(i=0;i<n;i++){
		if(max<(p[i].s)){
			max=p[i].s;
			t=i;
			
		}
		

	}
	printf("%s\n%d\n%d\n",p[t].name,max,sum);
	return 0;
}