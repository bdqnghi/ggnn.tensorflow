int main(){
    int i,j,l1,l2,count=0,o=1;
    double r;
    char a[1000],b[1000];
    scanf("%lf",&r);
    scanf("%s",a);
    scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2){
        printf("error");
        o=0;
        }
    else{
        for(i=0;i<l1;i++){
            if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){ 
                printf("error");  
                o=0;
                break;             
                }
             else{
                    if(a[i]==b[i]) count++;
                    }
            }
        if(1.0*count/l1>r&&o==1) printf("yes");
        else if(o==1) printf("no");    
        }
    
    
    scanf("%d",&i);
    return 0;
    }
