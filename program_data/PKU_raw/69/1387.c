
int main()
{
    char a[300],b[300],c[300];
    int i,aa,bb;
    gets(a);
    gets(b);
    aa=strlen(a),bb=strlen(b);
    if(aa>bb){
                            for(i=aa-1;i>=aa-bb;i--){
                                                                       b[i]=b[i-aa+bb];
                                                                       }
                            for(i=0;i<=aa-bb-1;i++){b[i]='0';}
                            b[aa]=0;
                            } 
    if(aa<bb){
                            for(i=bb-1;i>=bb-aa;i--){
                                                                       a[i]=a[i-bb+aa];
                                                                       }
                            for(i=0;i<=bb-aa-1;i++){a[i]='0';}
                            a[bb]='\0';
                            }
    if(bb>aa)aa=bb;
    //printf("%s\n%s\n", a, b);
    for(i=aa-1;i>=0;i--){
                                if(a[i]+b[i]-96<=9){c[i]=a[i]+b[i]-48;}
                                if(a[i]+b[i]-96>9&&i!=0){c[i]=a[i]+b[i]-58;b[i-1]+=1;}
                                if(a[i]+b[i]-96>9&&i==0){c[i]=a[i]+b[i]-48;}
                                }
    c[aa]='\0';
    char *cc = c;
    if(c[0]-48>9){printf("1");c[0]=c[0]-10;}
    else
    {
        while (*cc == '0') ++cc;
        if (*cc == 0) --cc;
    }
    printf("%s\n", cc);
    //while(1);
    }
