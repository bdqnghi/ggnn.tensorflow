int main(){
int n;
char sz[100][100];
scanf("%d",&n);
for(int i=0;i<n;i++){
 scanf("%s",sz[i]);
}

for(int i=0;i<n;i++){
 int len=strlen(sz[i]);
 if(sz[i][len-1]=='r'||sz[i][len-1]=='y'){
  sz[i][len-2]='\0';
 }else if(sz[i][len-1]=='g'){sz[i][len-3]='\0';}
}
for(int i=0;i<n;i++){
 printf("%s\n",sz[i]);
}
}