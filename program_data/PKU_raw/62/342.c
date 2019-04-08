int main() {
    int i,m,k;
    char kg[200];
    gets(kg);
    m=strlen(kg);
    for(i=0;i<m-1;i++){
        if(kg[i]==' '){
            if(kg[i+1]!=' '){continue;}
            else{k=i;
                while(i<m-1){kg[i]=kg[i+1];
                             i++;
                }
                i=k-2;
                m--;
            }
        }
    }
    kg[m]='\0';
    printf("%s",kg);
    return 0;
}