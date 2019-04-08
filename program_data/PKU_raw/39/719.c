struct stu{
	char name[20];
	int qc;
	int bc;
	char gb;
	char xb;
	int lw;
	int m;
	};
int main(){
	struct stu s[100];
	int n,i,k=0,u=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s[i].m=0;
		scanf("%s%d%d %c %c %d",s[i].name,&s[i].qc,&s[i].bc,&s[i].gb,&s[i].xb,&s[i].lw);
		if(s[i].qc>80&&s[i].lw>=1) s[i].m=s[i].m+8000;
		if(s[i].qc>85&&s[i].bc>80) s[i].m=s[i].m+4000;
		if(s[i].qc>90) s[i].m=s[i].m+2000;
		if(s[i].qc>85&&s[i].xb=='Y') s[i].m=s[i].m+1000;
		if(s[i].bc>80&&s[i].gb=='Y') s[i].m=s[i].m+850;
		u=s[i].m+u;
		if(s[i].m>s[k].m) k=i;
	}
	printf("%s\n%d\n%d",s[k].name,s[k].m,u);
	return 0;
}