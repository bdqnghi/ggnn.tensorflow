int main(){
    int n,i,a,b,c,d,e,f,g;
    scanf("%d\n",&n);
    scanf("%d %d",&a,&b);
    e=(b*1000)/a;
    for(i=1;i<n;i++){
        scanf("%d %d",&c,&d);
        f=(d*1000)/c;
        g=f-e;
        if(0-g>50){printf("worse");}
        else if(g>50){printf("better");}
        else{printf("same");}
        printf("\n");
    }
    return 0;
}