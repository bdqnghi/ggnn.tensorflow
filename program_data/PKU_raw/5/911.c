int main()
{
int i,k=0,j;
double x,num=0,len;
char c[1];
char a[500],b[500];
gets(c);
x=atof(c);
gets(a);
gets(b);
for(i=0;i<strlen(a);i++){
if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
printf("error");
k=1;
break;
}else{
if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')){
printf("error");
k=1;
break;
}
}
}
if(k!=1){
if(strlen(a)!=strlen(b)){
printf("error");
}else{
for(k=0;k<strlen(a);k++){
if(a[k]==b[k]){
num=num+1;
}
}
j=strlen(a);
len=1.00*j;
if((num/len)<=x){
printf("no");
}else{
if((num/len)>x){
printf("yes");
}
}
}
}
return 0;
}

