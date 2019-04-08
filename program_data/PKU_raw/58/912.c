
int identf(char *str);
int isKey(char *str);
int x_strcmp(char *si, char *di);

int main()
{
 char buffer[256];
 int n,i;
 scanf("%d",&n);
 gets(buffer);
 for (i=0;i<n;i++){
 gets(buffer);
 if(identf(buffer))
  puts("1");
 else
  puts("0");
 }  
 return 0;
}
int identf(char *str)
{
 int flag=0;
 char *p=str;
 if((*str>='a' && *str<='z') || (*str>='A' && *str<='Z') || *str=='_')
 {
  flag=1;
  str++;
 }
 while(*str && flag)
 {
  if((*str>='a' && *str<='z') || (*str>='A' && *str<='Z') || *str=='_'
   || (*str>='0' && *str<='9'))
  {
   flag=1;
   str++;
  }
  else
   flag=0;
 }
 if(flag)
  flag=isKey(p);
 return flag;
}
int isKey(char *str)
{
 char *keyword[]={"auto", "break", "case", "char", "const", "continue", "default",
     "do", "double", "else", "enum", "extern", "float", "for", "goto",
     "if", "int", "long", "register", "return", "short", "signed", 
     "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
     "void", "volatile", "while"};
 int i, flag=1;

 for(i=0; i<32; i++)
 {
  if(x_strcmp(str, keyword[i])==0)
  {
   flag=0;
   break;
  }
 }

 return flag;
}
int x_strcmp(char *si, char *di)
{
 while(*si && *di && *si==*di)
 {
  si++;
  di++;
 }
 return *si-*di;
}