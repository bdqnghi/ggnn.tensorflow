
int main(){
    struct scholar {
           char z[21];
           int qm;
           int bj;
           char gb;
           char xb;
           int paper;
           int total;
           };
           
           struct scholar a[1000];
           
    int n, i;  
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
        scanf("%s %d %d %c %c %d", a[i].z, &a[i].qm, &a[i].bj, &a[i].gb, &a[i].xb, &a[i].paper);
        a[i].total=0;
        } 
    
    for (i=0; i<n; i++){
        if (a[i].qm>80&&a[i].paper>0)
        a[i].total+=8000;
        if (a[i].qm>85&&a[i].bj>80)
        a[i].total+=4000;
        if (a[i].qm>90)
        a[i].total+=2000; 
        if (a[i].qm>85&&a[i].xb=='Y')
        a[i].total+=1000;
        if (a[i].bj>80&&a[i].gb=='Y')
        a[i].total+=850;    
        }
        
        int max=0;
        char name[22];
        int total=0;
    
    for (i=0; i<n; i++){
        if (a[i].total>max){
                            max=a[i].total;
                            strcpy(name, a[i].z);
                            }
        total+=a[i].total;
        }
        
    printf("%s\n%d\n%d\n", name, max, total);
        
        
    return 0;    
    
    }