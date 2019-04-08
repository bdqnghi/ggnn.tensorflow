int main(){   
    int i,j,k=0,l,l1,l2,o=0;
    char a0[300],b0[300],a[300]={0},b[300]={0};
    scanf("%s %s",a0,b0);
    l1=strlen(a0);
    l2=strlen(b0);
    l=(l1>l2)?l1:l2;
    for(i=0;i<l1;i++){
        a[i]=a0[l1-1-i]-'0';
        }
    for(i=0;i<l2;i++){
        b[i]=b0[l2-1-i]-'0';
        }
    for(i=0;i<l;i++){
        a[i]=a[i]+b[i];
        if(a[i]>=10){
            a[i]=a[i]-10;
            a[i+1]++;
            }
        }
    for(i=l;i>=0;i--){
        if(a[i]==0) k++;
        else break;
        }
    if(k<l){
        for(i=l-k;i>=0;i--){
            printf("%d",a[i]);
            }
        }
    else{
        for(i=l;i>=0;i--){
            if(a[i]!=0) o=1;
            }
        if(o==0) printf("0");
        }
    
    
    scanf("%d",&i);
    return 0;
    }
