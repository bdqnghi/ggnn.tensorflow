int main(){
int len1,len2,sum=0,i,k=0;
float n;
char a[1000];
char b[1000];
scanf("%f",&n);
scanf("%s",a);
scanf("%s",b);
len1=strlen(a);
len2=strlen(b);
if(len1!=len2){
printf("error");
k=1;
}else{
for(i=0;i<len1;i++){
if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
printf("error");
k=1;
break;
}

else if(a[i]==b[i])
sum++;
}
if(k==0){
if(1.0*sum/len1>n)
printf("yes");
else 
printf("no");
}
}
return 0;
}