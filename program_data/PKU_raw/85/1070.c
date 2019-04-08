
int main (){
    int n, x, i, b,j ;
    char a[21];
    
    scanf("%d", &n);
    
    for (i=0; i<n+1; i++){
        gets (a);
        x=0;
        if (a[0]==95||(a[0]>=65&&a[0]<=90)||(a[0]>=97&&a[0]<=122))
        {}
        else {x=1;}
        b=strlen(a);
        for (j=1; j<b; j++){
            if((a[j]>='0'&&a[j]<='9')||a[j]==95||(a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122)){}
            else
            {x=1;}
                                                                                                                                          
             }
        if (i>0){
        if(x==1){printf("no\n");}
        if(x==0){printf("yes\n");}
         }   
        }
    
    
    return 0;
    }