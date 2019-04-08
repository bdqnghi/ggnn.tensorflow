
int main(){
    int n;
    scanf("%d",&n);
    int shou[n];
    int zhang[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&(shou[i]),&(zhang[i]));
    }
    int a=0;
    int e=0;
     for(int i=0;i<n;i++){
       if(shou[i]>=90&&shou[i]<=140&&zhang[i]>=60&&zhang[i]<=90){
           a++;
           if(a>e){e=a;}
       }else{a=0;}
    }
    printf("%d",e);
    return 0;
}