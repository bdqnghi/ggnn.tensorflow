int main(){
    int n,i,j,p=1,l[100];
    char c[100][20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",c[i]);
    l[i]=strlen(c[i]);        
           }
    for(i=0;i<n;i++){
    if(c[i][0]<'A'||(c[i][0]>'Z'&&c[i][0]<'a'&&c[i][0]!='_')||c[i][0]>'z')
    {p=0;
    printf("no\n");
     }
    else if((c[i][0]>='a'&&c[i][0]<='z')||(c[i][0]>='A'&&c[i][0]<='Z')||(c[i][0]>='0'&&c[i][0]<='9'))
    {p=1;
    
      for(j=1;j<l[i];j++)
    {if(c[i][j]<'0'||(c[i][j]>'9'&&c[i][j]<'A')||(c[i][j]>'Z'&&c[i][j]<'a'&&c[i][j]!='_')||c[i][j]>'z')
    {p=0;
    printf("no\n");
    break;}      
                 }         
                 }    
    if(p==1)
    printf("yes\n");
    p=1;
                     }
    return 0;
    } 
