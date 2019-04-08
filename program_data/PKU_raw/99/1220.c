int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int nl[100];
    for(int i=0;i<n;i++){
        scanf("%d",&nl[i]);
    }
    for(int i=0;i<n;i++){
        if(nl[i]<=18){
            a++;
        }
        if(nl[i]>=19&&nl[i]<=35){
            b++;
        }
        if(nl[i]>=36&&nl[i]<=60){
            c++;
        }
        if(nl[i]>60){
            d++;
        }
    }
    double e,f,g,h;
    e=(double)a/n*100;
    f=(double)b/n*100;
    g=(double)c/n*100;
    h=(double)d/n*100;
    printf("1-18: %.2lf%%\n",e);
    printf("19-35: %.2lf%%\n",f);
    printf("36-60: %.2lf%%\n",g);
    printf("Over60: %.2lf%%",h);
    return 0;
    
}