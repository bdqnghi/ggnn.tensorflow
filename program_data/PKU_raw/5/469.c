int main()
{
    int i,b,c,d=1,e=1,f=0;
    double a,g;
    char s[500],z[500];
    scanf("%lf",&a);
    scanf("%s",s);
    b=strlen(s);
    scanf("%s",z);
    c=strlen(z);
    if(b!=c){printf("error");d=0;e=0;}
    if(d==1){
        for(i=0;i<b;i++){
            if((s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')||(z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')){
    printf("error");e=0;break;}}}
    if(d==1&&e==1){
        for(i=0;i<b;i++){
            if(s[i]==z[i]){f++;}}
    g=(1.0*f)/b;
    if(g>a){printf("yes");}
    if(g<=a){printf("no");}}
return 0;
}