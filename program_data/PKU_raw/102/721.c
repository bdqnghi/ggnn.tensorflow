float height;
float p1[nMax],p2[nMax];
char ss[10];
int cmp(const void *a,const void *b){
    return *(float *)a-*(float *)b;
}
int main (){
    int n;
    scanf("%d",&n);
    int i;
    int u=0,v=0;
    for(i=0;i<n;i++){
        scanf("%s%f",ss,&height);
        if(strcmp(ss,"male")==0){p1[u]=height;u++;}
        else if(strcmp(ss,"female")==0){p2[v]=height;v++;}
    }
    sort(p1,p1+u);
    sort(p2,p2+v);
    for(i=0;i<u;i++){
        printf("%.2f ",p1[i]);
    }
    for(i=v-1;i>=0;i--){
        printf("%.2f",p2[i]);
        if(i!=0){
            printf(" ");
        }
    }
    printf("\n");
        return 0;
}
