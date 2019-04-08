
int main(){
    int i,m,n,carry=0;
    char a[252],b[252],A[252],B[252],ADD[252],add[252];
    scanf("%s",a);
    scanf("%s",b);

    while(1){
        if(a[0]!='0')
            break;
        else if(a[0]=='0'&&strlen(a)>1){
            for(i=0;i<strlen(a)-1;i++)
                a[i]=a[i+1];
            a[strlen(a)-1]=0;              
        }else
            break;
    }
    while(1){
        if(b[0]!='0')
            break;
        else if(b[0]=='0'&&strlen(b)>1){
            for(i=0;i<strlen(b)-1;i++)
                b[i]=b[i+1];
            b[strlen(b)-1]=0;
        }else
            break;              
    }
    
    for(i=0;i<strlen(a);i++){
        A[strlen(a)-1-i]=a[i];
        A[strlen(a)]=0;
    }
    for(i=0;i<strlen(b);i++){
        B[strlen(b)-1-i]=b[i];
        B[strlen(b)]=0;
    }
   
    if(strlen(a)<strlen(b)){
        m=strlen(a);
        n=strlen(b);
    }
    else{
        m=strlen(b);
        n=strlen(a);
    }
    
    for(i=0;i<n;i++){
        if(i<m){
            ADD[i]=A[i]+B[i]-'0'+carry;
            if(ADD[i]>='0'&&ADD[i]<='9')
                carry=0;
            else{
                carry=(ADD[i]-'0')/10;
                ADD[i]=(ADD[i]-'0')%10+'0';
            }
        }else{
            if(strlen(A)>strlen(B))
                ADD[i]=A[i]+carry;
            else
                ADD[i]=B[i]+carry;
            if(ADD[i]>='0'&&ADD[i]<='9')
                carry=0;
            else{
                carry=(ADD[i]-'0')/10;
                ADD[i]=(ADD[i]-'0')%10+'0';
            }
        }
    }
    if(carry!=0){
        ADD[n]=carry+'0';
        ADD[n+1]=0;
    }else
        ADD[n]=0;
    
    for(i=0;i<strlen(ADD);i++){
        add[strlen(ADD)-1-i]=ADD[i];
        add[strlen(ADD)]=0;
    }
    
    printf("%s\n",add);
    
    return 0;
}
