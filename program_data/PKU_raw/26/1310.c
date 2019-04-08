int main(){
    int i,j,a;
    char x[200],y[200];
    gets(x);
    a=strlen(x);
    if(a!=1){
        y[0]=x[0];
        j=1;
        for(i=1;i<a-1;i++){
            while(1){
                if(x[i]!=' '||(x[i]==' '&&x[i-1]!=' ')){
                    y[j]=x[i];
                    j++;
                    break;}
                else{break;}}}
        y[j]=x[a-1];
        y[j+1]='\0';
    }
    if(a==1){
        y[0]=x[0];
        y[1]='\0';
    }
    puts(y);
    return 0;
}

