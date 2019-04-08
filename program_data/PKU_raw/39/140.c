
    struct Student{
        char name[21];
        int avg;
        int cls;
        char off;
        char west;
        int paper;
        };

int main()
{
    int i,j,N,high;
    long sch[100]={0};
    long schtot=0;
    char c;
    struct Student ptcpt[100];
    struct Student tmp;
        scanf("%d",&N);
    for (i=0;i<N-1;i++){
        j=0;
        while (j<22&&(c=getchar())!=' '){
            ptcpt[i].name[j]=c;
            j++;
            }
            ptcpt[i].name[j]='\0';
        scanf(" %d %d %c %c %d\n",&ptcpt[i].avg,&ptcpt[i].cls,&ptcpt[i].off,&ptcpt[i].west,&ptcpt[i].paper);
        if (ptcpt[i].avg>80&&ptcpt[i].paper>=1){
        sch[i]=sch[i]+8000;}
        if (ptcpt[i].avg>85&&ptcpt[i].cls>80){
        sch[i]=sch[i]+4000;}
        if (ptcpt[i].avg>90){
        sch[i]=sch[i]+2000;}
        if (ptcpt[i].avg>85&&ptcpt[i].west=='Y'){
        sch[i]=sch[i]+1000;}
        if (ptcpt[i].cls>80&&ptcpt[i].off=='Y'){
        sch[i]=sch[i]+850;}

        schtot=schtot+sch[i];
        }

        j=0;
        while (j<22&&(c=getchar())!=' '){
            ptcpt[N-1].name[j]=c;
            j++;
            }
            ptcpt[N-1].name[j]='\0';
        scanf(" %d %d %c %c %d",&ptcpt[N-1].avg,&ptcpt[N-1].cls,&ptcpt[N-1].off,&ptcpt[N-1].west,&ptcpt[N-1].paper);
        if (ptcpt[N-1].avg>80&&ptcpt[N-1].paper>=1) {
            sch[N-1]=sch[N-1]+8000;
        }
        if (ptcpt[N-1].avg>85&&ptcpt[N-1].cls>80){
        sch[N-1]=sch[N-1]+4000;}
        if (ptcpt[N-1].avg>90){
        sch[N-1]=sch[N-1]+2000;}
        if (ptcpt[N-1].avg>85&&ptcpt[N-1].west=='Y'){
        sch[N-1]=sch[N-1]+1000;}
        if (ptcpt[N-1].cls>80&&ptcpt[N-1].off=='Y'){
        sch[N-1]=sch[N-1]+850;}

        schtot=schtot+sch[N-1];
        strcpy(tmp.name,ptcpt[N-1].name);
                high=sch[N-1];

        for (i=N-1;i>-1;i--){
            if (high<=sch[i]){
                strcpy(tmp.name,ptcpt[i].name);
                high=sch[i];
                }
                else continue;
            }
        printf("%s\n%d\n%ld",tmp.name,high,schtot);
    return 0;
}