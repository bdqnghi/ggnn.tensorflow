void main()
{
  char s1[100],s2[100];
  int length1,i,length2;
  gets(s1);
  gets(s2);
  length1=strlen(s1);
  for(i=0;i<length1;i++)
    if(s1[i]>='A'&&s1[i]<='Z')
	   s1[i]=s1[i]+32;
 length2=strlen(s2);
 for(i=0;i<length2;i++)
    if(s2[i]>='A'&&s2[i]<='Z')
	   s2[i]=s2[i]+32;
if(strcmp(s1,s2)>0)
  printf(">");
else if(strcmp(s1,s2)<0)
  printf("<");
else printf("=");
}
  