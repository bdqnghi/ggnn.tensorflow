int main(){
    int n,x,y;
    x=0;
    y=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
      int a,b;
      a=0;
    b=0;
        scanf("%d %d\n",&a,&b);
        if(a==1&&b==0){y++;}
        else if(a==2&&b==1){y++;}
        else if(a==0&&b==1){x++;}
        else if(a==1&&b==2){x++;}
        else if(a==2&&b==0){x++;}
        else if(a==0&&b==2){y++;} }
 if(x>y){printf("A");}
 else if(x<y){printf("B");}
else if(x=y){printf("Tie");}
    
    return 0;
}
