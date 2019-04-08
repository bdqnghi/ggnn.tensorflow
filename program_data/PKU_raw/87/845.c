int main(){
    int a,b,c,d,e,f,n=1000,i,t;
    for(i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;}
        else{
            t=(d+12-a-1)*3600+(60-b+e)*60+(0-c+f);
            printf("%d\n",t);
        }
    }
    return 0;
}

