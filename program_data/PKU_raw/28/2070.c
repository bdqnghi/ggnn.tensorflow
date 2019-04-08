int main(){
    char s[1001],c[1001];
    gets(s);
    c[0]=s[0];
    int i,j,t=0,a[300];
    for(i=1,j=1;s[i]!='\0';i++){
        if(s[i]!=' '){
            c[j]=s[i];
            j++;
        }else{
            if(s[i-1]!=' '){
                c[j]=s[i];
                j++;
            }
        }
    }
    c[j]=' ';
    c[j+1]='\0';
    for(i=0,j=0;c[i]!='\0';i++){       
        j++;
        if(c[i]==' '){
            a[t]=j-1;
            t++;
            j=0;
        }
    } 
    for(i=0;i<t-1;i++){
        printf("%d,",a[i]);
    }
    printf("%d",a[i]);
    return 0;
}   
