
int main(){
  char ans1[100],ans2[100],s1[100],s2[100];
  memset(ans1,0,sizeof(ans1));
  memset(ans2,0,sizeof(ans2));
  ans1[0]='\0';
  ans2[0]='\0';
  while (scanf("%s",s1)!=EOF){
    int i,j,l=strlen(s1);
    if (strlen(ans1)==0) memcpy(ans1,s1,sizeof(s1));
    for (i=0;i<l;i++)
      if (s1[i]==','){
        s1[i]='\0';
        for (j=i+1;j<l;j++) 
          s2[j-i-1]=s1[j];
        s2[l-i-1]='\0';
        break;
      }
    l=strlen(s1);
    if (l<strlen(ans1)) memcpy(ans1,s1,sizeof(s1));
    if (l>strlen(ans2)) memcpy(ans2,s1,sizeof(s1));
    l=strlen(s2);
    if (l){
      if (l<strlen(ans1)) memcpy(ans1,s2,sizeof(s2));
      if (l>strlen(ans2)) memcpy(ans2,s2,sizeof(s2));
    }
  }
  printf("%s\n%s\n",ans2,ans1);
}