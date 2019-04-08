int main(){
    int n,a,b,sa=0,sb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
         if(a-b==1){
            sb++;
        }
         else if(b-a==1){
            sa++;
        }
        else if(a==0&&b==2){sb++;}
        else if(a==2&&b==0){sa++;}
    
    }
    if(sa>sb){
        printf("A");
    }
     if(sa<sb){
        printf("B");
    }
     if(sa==sb){
        printf("Tie");
    }
    
 
    return 0;
}

