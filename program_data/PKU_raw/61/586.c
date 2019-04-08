
int F(int a){
    int result;
    if(a==1||a==2)
        return 1;
    else{
        result=F(a-1)+F(a-2);
        return result;     
    }    
}

int main(){
    int n,in[21],out[21],i,q;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&in[i]);
        out[i]=F(in[i]);                 
    }
    
    for(i=0;i<n;i++)
        printf("%d\n",out[i]);
    
    scanf("%d\n",&q);
    return 0;
}
