int main()
{char b[200];
 char a[200];
 int acal[26]={0};int bcal[26]={0};
  int alen,blen,i=0;
 scanf("%s %s",&a,&b);
 alen=strlen(a);
 blen=strlen(b);
 if(alen!=blen)printf("NO");
 else
  { for(i=0;i<=alen-1;i++)
    { acal[a[i]-97]++;                          }
    for(i=0;i<=blen-1;i++)
    { bcal[b[i]-97]++;                          }
    for(i=0;i<=25;i++)
    { if(acal[i]!=bcal[i])
      break;}
    if(i==26)
    printf("YES");
    else
    printf("NO");
  }
  
 getchar();
 getchar();
}