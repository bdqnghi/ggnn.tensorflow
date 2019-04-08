int main(){
    int n,i,j,l,o=0,k=0,p=0;
    char a[100],b[100][10]={' '},c[100][10]={' '};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]>='0'&&a[i]<='9'){
            b[o][k++]=a[i];
            }
        if(!(a[i]>='0'&&a[i]<='9')){
            o++;
            k=0;
            }
        }
    for(i=0;i<=o;i++){
        if(strcmp(b[i]," ")!=-1) printf("%s\n",b[i]);
        //printf("%d\n",strcmp(b[i]," "));
        }
    
    
   
    
    
    
    scanf("%d",&i);
    return 0;
    }
