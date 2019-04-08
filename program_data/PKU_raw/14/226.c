int main(){
    struct student{
        int num;
        int chs;
        int math;
    };
    struct student s[100000];
    struct student s1[2]={{0,0,0},{0,0,0}};
    int n,i,t,j,a[100000],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&s[i].num,&s[i].chs,&s[i].math);
        a[i]=s[i].chs+s[i].math;
    }
    for(i=0;i<3;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=n-1;i>n-4;i--){
        for(j=0;j<n;j++){
            if(a[i]==s[j].chs+s[j].math&&s[j].num!=s1[0].num&&s[j].num!=s1[1].num){
                printf("%d %d\n",s[j].num,s[j].chs+s[j].math);
                s1[k]=s[j];
                k++;
                if(k==3){
                    goto end;
                }
            }
        }
    }
  end:
    return 0;
}