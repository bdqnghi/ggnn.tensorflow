int main(){
    int n;
    int sz[100];
    int sa[100];
    double sd[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &sz[i], &sa[i]);
        sd[i]=(sa[i]*1.0)/sz[i];
    }
    for(int i=1;i<n;i++){
        if((sd[i]-sd[0])>0.05){printf("better\n");}
         else if((sd[0]-sd[i])>0.05){printf("worse\n");}
          else{printf("same\n");}
    }
    return 0;
}