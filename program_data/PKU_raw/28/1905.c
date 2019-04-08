int main(){
    char a[3000]={0},st[100][1000]={0},b[3000]={0};
    int i,j=0,k=0,len,n,l[1000]={0},o=1;
    gets(a);
    len=strlen(a);
    b[0]=a[0];
    for(i=1;i<len;i++){
        if(a[i]!=' '||a[i]==' '&&a[i-1]!=' '){
            b[o++]=a[i];
            }
        }    
    for(i=0;i<o;i++){
        if(b[i]!=' '){
            st[j][k++]=b[i];
            }
        if(b[i]==' '){
            l[j]=k;
            j++;            
            k=0;
            }
        }    
    l[j]=strlen(st[j]);
    for(i=0;i<j;i++){
        printf("%d,",l[i]);
        }
    printf("%d",l[j]);
    //printf("\n%s",st[j]);
    
    
    scanf("%d",&i);
    return 0;
    }
