int main(){
    int a,b,n,i,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==0&&b==1){c++;}
        if(a==1&&b==2){c++;}
        if(a==2&&b==0){c++;}
        if(a==1&&b==0){d++;}
        if(a==2&&b==1){d++;}
        if(a==0&&b==2){d++;}
        if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){continue;}
    
    }
    if(c>d){printf("A");}
    if(c<d){printf("B");}
    if(c==d){printf("Tie");}
    return 0;
}
