int main (){
    int n,k,m;
    int x,c;
    x=0;
    c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d%d",&k,&m);
      
  if(k==1&&m==2){x++;}
       else if(k==0&&m==2){c++;}
       else if(k==0&&m==1){x++;}
       else if(k==2&&m==1){c++;}
       else if(k==2&&m==0){x++;}
       else if(k==1&&m==0){c++;}
       
    }
 if(x>c){printf("A");}
 else if(x==c){printf("Tie");}
 else if(x<c){printf("B");}
}

