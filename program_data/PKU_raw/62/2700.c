int main()
{
    int i,a,c=0;
    char zfc[1000],zfc2[1000];
    gets(zfc);
    a=strlen(zfc);
    for(i=0;i<1000;i++){
                        zfc2[i]=' ';
    }
    for(i=0;i<a;i++){
                     if(zfc[i]!=' '){
                                  zfc2[c]=zfc[i];
                                  c++;
                     }
                     if(zfc[i]==' '&&zfc[i-1]!=' '){
                                  zfc2[c]=zfc[i];
                                  c++;
                     }
    }
    zfc2[c]='\0';
    puts(zfc2);
    scanf("%d",&a);
    return 0;
}