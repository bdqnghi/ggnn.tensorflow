int main(){
    int n,c,b=0;
    scanf("%d",&n);
    if(n<5)
    printf("empty");
    else{
    for(int i=3;i<=n;i=i+2){
            c=1;
            for(int j=3;j<i;j=j+2){
                    if(i%j==0){
                    c=0;
                    b=0; 
                    break;
                    }
                    }
            if(c==1)
            b++;
            if(b>1)
            printf("%d %d\n",i-2,i);
            }
    }  
    return 0;
}