int main(){
    int n,i,j,s,k;
    char c[40];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",c);
        s=strlen(c);
        if (c[s-2]=='e'&&c[s-1]=='r'){
           for (k=0;k<s-2;k++)  printf("%c",c[k]);
           printf("\n");
        }
        if (c[s-2]=='l'&&c[s-1]=='y'){
           for (k=0;k<s-2;k++)  printf("%c",c[k]);
           printf("\n");
        }
        if (c[s-3]=='i'&&c[s-2]=='n'&&c[s-1]=='g'){
           for (k=0;k<s-3;k++)  printf("%c",c[k]);
           printf("\n");
        }
    }
    return 0;
}
