int main(){
    int i,n,a,b,c,A,B;
    scanf("%d",&n);
    for(a=0,b=0,c=0,i=0;i<n;i++){
        scanf("%d %d",&A,&B);
        if((A==0)&&(B==1)){
            a++;
        }
        else if((A==1)&&(B==2)){
            a++;
        }
        else if((A==2)&&(B==0)){
            a++;
        }
        else if((A==1)&&(B==0)){
            b++;
        }
        else if((A==2)&&(B==1)){
            b++;
        }
        else if((A==0)&&(B==2)){
            b++;
        }
        else if((B==0)&&(A==0)){
            c++;
        }        
        else if((B==1)&&(A==1)){
            c++;
        }        
        else if((B==2)&&(A==2)){
            c++;
        }       
        //printf("%d-%d ",a,b);
    }
    //printf("%d %d",a,b);
    if(a>b){
        printf("A");
    }
    else if(a==b){
        printf("Tie");
    }
    else if(a<b){
        printf("B");
    }
    return 0;
}
