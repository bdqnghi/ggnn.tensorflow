int main(){
    int i,j,l,n,o=1,count=0;
    char a[100];
    scanf("%d",&n);getchar();
    for(j=0;j<n;j++){
        gets(a);
        l=strlen(a);
        if(a[0]>='0'&&a[0]<='9') o=0;
        else{
            for(i=0;i<l;i++){
                if((a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]=='_')){
                    count++;                    
                    } 
                }
            }
        if(count==l) o=1;
        else o=0;
        printf("%d\n",o);
        count=0;       
        for(i=0;i<100;i++) a[i]=' ';
        }
    
    
    scanf("%d",&i);
    return 0;
    }
