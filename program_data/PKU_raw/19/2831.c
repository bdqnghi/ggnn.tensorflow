void main(){
    int i=1,t;
    char a[20][20],(*p)[20],x[20],y[20];
    p=a;
    scanf("%s",p);
    while(getchar()!='\n'){
        scanf("%s",p+i);
        i++;
    }
    scanf("%s%s",x,y);
    for(t=0;t<i;t++){
        if(strcmp(p+t,x)==0)
            printf("%s",y);
        else
            printf("%s",p+t);
        if(t!=i-1)
            printf(" ");
    }
    //printf("%s",p);
}
