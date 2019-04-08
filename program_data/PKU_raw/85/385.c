
int main(){
    int i,j,n,s=0;
    char name;
    scanf("%d",&n);
        name=getchar();
    for(i=0;i<n;i++)
    {
        s=0;
        name=getchar();
        if(('1'<=name && name<='9') || name=='0')
            s+=1;
        do{

            if(('a'<=name&&name<='z') ||( 'A'<=name&&name<='Z') || name=='_' || ('1'<=name && name<='9' )||'0'==name)
            {    s+=0;
         //        printf("0");
         }
            else
            {
                s+=1;
         //       printf("1");
            }
            name=getchar();
        }while(name!='\n');
        printf("\n");
        if(s==0)
           printf("yes\n");
        else
           printf("no\n");
        
    }
    

    return 0;    
}
