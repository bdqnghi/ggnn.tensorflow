int main()
{
struct book
{
    int No;
    char name[27];
}b[1000];
    int i,j,m;
    scanf("%d",&m);
    printf("\n");
    for(i=0;i<m;i++){
        scanf("%d ",&b[i].No);
        scanf("%s",b[i].name);
    }
    int n,l,a[26]={0};
    for(i=0;i<m;i++){
        l=strlen(b[i].name);             
        for(j=0;j<l;j++){
            n=b[i].name[j];a[n-65]++;             
        }             
    }
    int max=0,x;
    for(i=0;i<26;i++){
        if(a[i]>max){max=a[i];x=i;}              
    }
    printf("%c\n%d",x+65,max);
    for(i=0;i<m;i++){
        l=strlen(b[i].name);             
        for(j=0;j<l;j++){
            if(b[i].name[j]==x+65){printf("\n%d",b[i].No);break;}                          
        } 
    }                
    return 0;
}
