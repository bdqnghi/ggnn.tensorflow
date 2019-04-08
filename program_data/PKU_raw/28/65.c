void main()
{
int n,m,a=0,i;
char str[3000];
gets(str);
n=strlen(str);
str[n]='\0';
for(i=0;;i++){
  if(str[i]==' '||str[i]=='\0') {m=i;printf("%d",m);break;}
  else continue;
  }
for(i=m+1;i<n;i++){
  if(str[i]!=' ') a++;
  if((str[i]==' '&&str[i+1]!=' ')) {printf(",%d",a);a=0;}
  if(str[i+1]=='\0') printf(",%d",a);
  }
}

