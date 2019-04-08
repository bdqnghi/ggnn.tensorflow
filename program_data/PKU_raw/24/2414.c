int main()
{
  char s[20],min[20],max[20];
  char c;
  strcpy(min,"1111111111111111111");
  max[0]='\0';  
  while(1)
    {
        scanf("%s",s); 
        if(strlen(min)>strlen(s)) strcpy(min,s);  
        if(strlen(max)<strlen(s)) strcpy(max,s);
        c=getchar();  if(c=='\n') break;
    } 
  printf("%s\n",max);
  printf("%s\n",min);
}