int main(){
 int n,i,k,p=0;
 char s[N][21];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%s",s[i]);
 for(i=0;i<n;i++){
  if((s[i][0]>='0')&&(s[i][0]<='9'))
    printf("no\n");
  else {for(k=0;s[i][k]!=0;k++){
         if(((s[i][k]>='a')&&(s[i][k]<='z'))||((s[i][k]>='A')&&(s[i][k]<='Z'))||((s[i][k]>='0')&&(s[i][k]<='9'))||(s[i][k]=='_'))
          p=1;
		 else {
			 printf("no\n");
			 break;
		 }

  }if(s[i][k]==0)
	printf("yes\n");
  }
 }
return 0;
}