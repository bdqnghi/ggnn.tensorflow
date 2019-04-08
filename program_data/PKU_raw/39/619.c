int main(){
    struct student{
        char name[20];
        int grade1;
        int grade2;
        char jerk;
        char west;
        int paper;
    };
    struct student nerd[100];
    int n,i,j,blame[100]={0},max=0,sin=0;
    scanf("%d",&n);
	for(i=0;i<=(n-1);i++){
		scanf("%s %d %d %c %c %d",nerd[i].name,&nerd[i].grade1,&nerd[i].grade2,&nerd[i].jerk,&nerd[i].west,&nerd[i].paper);
	}
    for(i=0;i<n;i++){
        if(nerd[i].grade1>80&&nerd[i].paper>=1){
            blame[i]+=8000;
        }
        if(nerd[i].grade1>85&&nerd[i].grade2>80){
            blame[i]+=4000;
        }
        if(nerd[i].grade1>90){
            blame[i]+=2000;
        }
        if(nerd[i].grade1>85&&nerd[i].west=='Y'){
            blame[i]+=1000;
        }
        if(nerd[i].grade2>80&&nerd[i].jerk=='Y'){
            blame[i]+=850;
        }
    }
    for(i=0;i<n;i++){
        if(blame[i]>max){
            j=i;
            max=blame[i];
        }
        sin+=blame[i];
    }
    printf("%s\n",nerd[j].name);
    printf("%d\n%d",max,sin);
    return 0;
}