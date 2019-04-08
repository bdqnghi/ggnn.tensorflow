void main()
{
 char s[100];
 int i,j;
 gets(s);
 char *p=s;
 for(i=0;i<strlen(s);)
 if(*(p+i)==' '&&*(p+i-1)==' ')
 {for(j=i;j<strlen(s);j++)
   *(p+j)=*(p+j+1);} 
 else i++;
 for(i=0;i<strlen(s);i++)
 printf("%c",*(p+i));
}