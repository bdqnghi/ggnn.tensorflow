int main()
{
    int i,j,m,k=0;
    char a[1000];
    gets(a);
    m=(int)strlen(a);
    a[m]=' ';
    for(i=0;i<=m;i++){
        if(a[i]!=' '){
            k=k+1;
        }else if(a[i]==' '&&a[i-1]!=' '&&i<m){
            printf("%d,",k);
            k=0;
        }else if(i==m){printf("%d",k);
        break;
        }
        else{continue;}
     }
    return 0;
}

