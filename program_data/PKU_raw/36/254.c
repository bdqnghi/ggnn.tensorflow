int main()
{int i,j;
char m,a[100]={0},b[100]={0};
 scanf("%s %s",a,b);
 for(i=0;i<=strlen(a);i++){for(j=0;j<strlen(a)-1;j++){if(a[j]<a[j+1]){m=a[j];a[j]=a[j+1];a[j+1]=m;}}}
 for(i=0;i<=strlen(b);i++){for(j=0;j<strlen(b)-1;j++){if(b[j]<b[j+1]){m=b[j];b[j]=b[j+1];b[j+1]=m;}}}
 if(strcmp(a,b)==0)printf("YES\n");else printf("NO\n");
 return 0;}