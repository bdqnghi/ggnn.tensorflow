int main(){
    char xi[50][35],y[50][35];
    int n,c,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&xi[i]);
    }
        for(i=0;i<n;i++){
            c=strlen(xi[i]);
            for(j=0;xi[i][j]!='\0';j++){
                y[i][j]=xi[i][j];}
                if(xi[i][c-2]=='l'&&xi[i][c-1]=='y')
                    y[i][c-2]='\0';
                if(xi[i][c-2]=='e'&&xi[i][c-1]=='r')
                    y[i][c-2]='\0';
                if(xi[i][c-3]=='i'&&xi[i][c-2]=='n'&&xi[i][c-1]=='g')
                    y[i][c-3]='\0';
                printf("%s\n",y[i]);
        }
return 0;
}
