int main (){
    int n,i,j,l;
    char s[300];
    scanf("%d",&n);
    for (i=0; i<n; i++)
      {
          scanf("%s",s);
          l=strlen(s);
          if (s[l-1]=='r') s[l-2]=0;
          if (s[l-1]=='g') s[l-3]=0;
          if (s[l-1]=='y') s[l-2]=0;
          puts(s);
          
      }
      return 0;
}

