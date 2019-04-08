int main(){
    struct old{
        char ID[10];
        int age;
    };
    struct old ill[100];
    struct old t1[100];
    struct old t2[100];
    struct old t;
    int n,i,j=0,k=0,num60=0,num0=0,b[100]={0},p,num=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",ill[i].ID);
        scanf("%d",&ill[i].age);
        if(ill[i].age>=60){
            t1[j]=ill[i];
            j++;
            num60++;
        }
        else{
            t2[k]=ill[i];
            k++;
            num0++;
        }
    }
    for(i=0;i<num60;i++){
        p=0;
        for(j=0;j<num60;j++){
            if(t1[j].age>p&&b[j]==0){
                p=t1[j].age;
                num=j;
            }
        }
        printf("%s\n",t1[num].ID);
        b[num]=1;
    }
    for(i=0;i<num0;i++){
        printf("%s\n",t2[i].ID);
    }
    return 0;
}