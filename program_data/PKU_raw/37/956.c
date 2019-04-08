int main(){
int n,i,k,h,m,p;
h=0;
p=0;
char a[100000];
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%s",a);
for(k=0;a[k]!='\0';k++){
for(m=0;a[m]!='\0';m++){
if(a[k]==a[m]){
h=h+1;
}
}
if(h==1){
printf("%c\n",a[k]);
p=1;
break;
}
h=0;
}
if(p==0){
printf("no\n");
}
p=0;
h=0;
}
return 0;
}

