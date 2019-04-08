int main()
{
    int n,i,k;
    int a,b,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a==0){
            if(b==1){
               s=s+1; 
            }else if(b==2){
                s=s-1;
            }
        }else if(a==1){
            if(b==0){
                s=s-1;
            }else if(b==2){
                s=s+1;
            }
        }else if(a==2){
            if(b==0){
                s=s+1;
            }else if(b==1){
                s=s-1;
            }
        }
    }
    if(s==0){
        printf("Tie");
    }else if(s>0){
        printf("A");
    }else{
        printf("B");
    }
    return 0;
}
