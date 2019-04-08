int identf(char *str);
int isKey(char *str);


int main()
{

 int n,i;
 char buffer[256];
scanf("%d",&n);
getchar();
 for(i=0;i<n;i++)
 {
	gets(buffer);
	if(identf(buffer))
		 {
	printf("1\n");
		}
	else
	{
		printf("0\n");
	}
 }
 return 0;
}






/**************************************************************************/
int identf(char *str)
{
 int flag=0;
char *p=str;
 /*???????????*/
 if((*str>='a' && *str<='z') || (*str>='A' && *str<='Z') || *str=='_')
 {
  flag=1;
  str++;
 }
 /*????????????*/
 while(*str&&flag)
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
 
 /*????????*/
 if(flag)
  flag=isKey(p);

 return flag;
}
/*****************************??????*******************************/
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
  if(strcmp(str, keyword[i])==0)
  {
   flag=0;
   break;
  }
 }

 return flag;
}