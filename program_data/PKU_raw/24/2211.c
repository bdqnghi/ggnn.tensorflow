int main()
{
    char a[200][20],max1[20],min1[20];
    int i,j,flag=0,max,min,p,q;
    for(i=0;;i++){if(flag==1) {a[i][0]='\0';break;}
                  for(j=0;;j++){
                                scanf("%c",&a[i][j]);
                                if(a[i][j]==' ') {a[i][j]='\0';break;}
                                if(a[i][j]=='\n') {a[i][j]='\0';flag=1;break;}
                                }
                                }
    min=strlen(a[0]);
    max=strlen(a[0]);
    strcpy(max1,a[0]);
    strcpy(min1,a[0]);
    for(p=0;p<i;p++){
                     if(strlen(a[p])>max) {max=strlen(a[p]);strcpy(max1,a[p]);}
                     if(strlen(a[p])<min) {min=strlen(a[p]);strcpy(min1,a[p]);}
                     }
    printf("%s\n",max1);
    printf("%s",min1);
    return 0; 
}
