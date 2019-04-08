int main(){
    char sz[100];
    int i,n,x;
   gets(sz);
n=strlen(sz);
for(i=0;i<n-1;i++){
    if(sz[i]==' '){
        if(sz[i+1]==' '){
            continue;
        }
        else{
            printf(" ");
        }
    }
    else{
        printf("%c",sz[i]);
    }
}
printf("%c",sz[n-1]);
return 0;
}

