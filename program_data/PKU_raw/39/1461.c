
struct student
{
	char name[20];
	int qm;
	int bj;
	char gb,xb;
	int lw;
	int jj;
}stu[100];

int main()
{
	char c;
    int n,i,j,sum=0;    
    struct student*pstu=stu,e;
    pstu=&stu[0];

	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].qm,&stu[i].bj,&stu[i].gb,&stu[i].xb,&stu[i].lw);
    }
    for(i=0;i<n;i++){stu[i].jj=0;
    if(stu[i].qm>80&&stu[i].lw>=1){stu[i].jj+=8000;}
    if(stu[i].qm>85&&stu[i].bj>80){stu[i].jj+=4000;}
    if(stu[i].qm>90){stu[i].jj+=2000;}
    if(stu[i].qm>85&&stu[i].xb=='Y'){stu[i].jj+=1000;}
    if(stu[i].bj>80&&stu[i].gb=='Y'){stu[i].jj+=850;}
                     }
    
    for(j=0;j<n;j++){
                     for(i=0;i<n-j;i++){
                                        if(stu[i].jj<stu[i+1].jj){
                                                                  e=*(pstu+i);
                                                                  *(pstu+i)=*(pstu+i+1);
                                                                  *(pstu+1+i)=e;}
}}
   
   for(i=0;i<n;i++){sum+=stu[i].jj;}
   printf("%s\n%d\n%d\n",(pstu)->name,(pstu)->jj,sum);
   scanf("%s",c);return 0;
   

}
