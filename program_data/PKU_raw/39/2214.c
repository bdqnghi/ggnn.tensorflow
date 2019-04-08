struct
{
    char name[21];
	int test,grade,paper,sum;
	char monitor,west;
}stu[100];
int main()
{
    int n,i,j,s=0,a,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%s %d %d %c %c %d",
			stu[i].name,
			&stu[i].test,
			&stu[i].grade,
			&stu[i].monitor,
			&stu[i].west,
			&stu[i].paper);
			stu[i].sum=0;
            if(stu[i].test>80&&stu[i].paper>=1) stu[i].sum+=8000;
            if(stu[i].test>85&&stu[i].grade>80) stu[i].sum+=4000; 
			if(stu[i].test>90) stu[i].sum+=2000;
            if(stu[i].test>85&&stu[i].west=='Y') stu[i].sum+=1000;
			if(stu[i].grade>80&&stu[i].monitor=='Y') stu[i].sum+=850;
			s+=stu[i].sum;
	}
    a=stu[0].sum;
	for(i=1;i<n;i++){
		if(stu[i].sum>a){
		    a=stu[i].sum;
			b=i;
		}
	}
	printf("%s\n%d\n%d",stu[b].name,stu[b].sum,s);
	return 0;
}
