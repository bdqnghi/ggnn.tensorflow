int main()
{
 int MyStrCmp(char *pStr1,char *pStr2);
 char a1[81],a2[81];
 int t;
 gets(a1);
 gets(a2);
    t=MyStrCmp(a1,a2);
 if(t==1)printf(">");
 if(t==0)printf("=");
 if(t==-1)printf("<");
 printf("\n");
 return 0;
}

int MyStrCmp(char *pStr1,char *pStr2)
{
 int i;
 int t;
 char b1[81],b2[81];
 for(i=0;pStr1[i]!='\0';i++)
  if(pStr1[i]>='A'&&pStr1[i]<='Z')
  *(pStr1+i)=*(pStr1+i)+32;
 for(i=0;pStr2[i]!='\0';i++)
  if(pStr2[i]>='A'&&pStr2[i]<='Z')
  *(pStr2+i)=*(pStr2+i)+32;
        t=0;
  if(strlen(pStr1)>strlen(pStr2))t=1;
     if(strlen(pStr1)<strlen(pStr2))t=-1;
        if(strlen(pStr1)==strlen(pStr2))
  {
   for(i=0;i<strlen(pStr1);i++)
   {
    if(*(pStr1+i)>*(pStr2+i))
    {
     t=1;
                    break;
    }
    if(*(pStr1+i)<*(pStr2+i))
    {
     t=-1;
     break;
    }
    if(*(pStr1+i)==*(pStr2+i))
     continue;
   }
  }
 return (t);
}