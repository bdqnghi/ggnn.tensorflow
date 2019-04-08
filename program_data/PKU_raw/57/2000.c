/*
 * post.c
 *
 *  Created on: 2010-1-5
 *      Author: Administrator
 */

int main(){
 char a1[50],a2[50];
 int n,i,j,len;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 // gets(a1);
  scanf("%s",a1);
  len=strlen(a1);
  if(a1[strlen(a1)-1]=='r'||a1[strlen(a1)-1]=='y'){
   for(j=0;j<len-2;j++){
    a2[j]=a1[j];
   }
   a2[j]=0;
   printf("%s\n",a2);
  }
  else if(a1[strlen(a1)-1]=='g'){
   for(j=0;j<len-3;j++){
    a2[j]=a1[j];
   }
   a2[j]=0;
   printf("%s\n",a2);
  }
 }
 return 0;
}
