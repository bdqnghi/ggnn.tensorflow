int main()
{
 char str[256],sub[256],rep[256],temp[256];
 char* p;
 gets(str);
 gets(sub);
 gets(rep);
 p = strstr(str,sub);
 if(p!=NULL){
  *p = 0;
  strcpy(temp, str);
  strcat(temp, rep);
  strcat(temp, p+strlen(sub));
  strcpy(str, temp);
 }
 printf("%s\n", str);
 return 0;
} 