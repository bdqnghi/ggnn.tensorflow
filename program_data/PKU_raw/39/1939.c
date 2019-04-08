int main()
{
	struct Student{
		char name[50];
		int cj,py,lw,sum;
		char gb,xb;
	}stu[100],temp;
	
	int n,i,sum=0,j,k;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s%d%d %c %c%d",&stu[i].name,&stu[i].cj,&stu[i].py,&stu[i].gb,&stu[i].xb,&stu[i].lw);
	}
	for (i=0;i<n;i++){
		stu[i].sum=0;
		if (stu[i].cj>80&&stu[i].lw>=1) stu[i].sum+=8000;
		if (stu[i].py>80&&stu[i].gb=='Y') stu[i].sum+=850;
		if (stu[i].cj>85&&stu[i].py>80) stu[i].sum+=4000;
		if (stu[i].cj>85&&stu[i].xb=='Y') stu[i].sum+=1000;
		if (stu[i].cj>90) stu[i].sum+=2000;
	}
	
	for (i=0;i<n;i++){
		sum+=stu[i].sum;
	}
	
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (stu[j].sum>stu[i].sum){
				temp=stu[j];
				for (k=j;k>i;k--){
					stu[k]=stu[k-1];
				}
				stu[i]=temp;
			}
		}
	}
	printf("%s\n%d\n%d",stu[0].name,stu[0].sum,sum);
	return 0;
}
