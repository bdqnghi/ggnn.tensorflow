int main(){
    int i,j,l1,l2,mark,count=0,k=0;
    char a[1000],b[1000];
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l2;i++){
        count=0;
        //k=0;
        if(b[i]==a[0]){
            for(j=0;j<l1;j++){
                if(b[i+j]==a[k++]) count++;
                }
            }
        if(count==l1) mark=i;
        }
    printf("%d\n",mark);
    
    
    scanf("%d",&i);
    return 0;
    }
