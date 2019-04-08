int main (){
 int n,i,j,flag;
 scanf("%d",&n);
 char a[25];
 for(i=0;i<n;i++){
  scanf("%s",a);
     flag=0;
 for(j=0;a[j]!='\0';j++){
  if((a[0]=='_')||((a[0]<='Z')&&(a[0]>='A'))||((a[0]<='z')&&(a[0]>='a'))){
    if(!(((a[j]<='Z')&&(a[j]>='A'))||((a[j]<='z')&&(a[j]>='a'))||((a[j]<='9')&&(a[j]>='0'))||(a[j]=='_'))){
     flag=0;
   goto m;
    }
    else {
     flag=1;
     continue;
    }

  }

}
m:if(flag==0){
 printf("no\n");
}else{
 printf("yes\n");
}
 }
return 0;
}
