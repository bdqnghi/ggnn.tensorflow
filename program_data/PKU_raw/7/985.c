main()
{
 char *s=(char*)malloc(256),*s1=(char*)malloc(256),*s2=(char*)malloc(256);
 int i,j,k,m=0;
 gets(s);
 gets(s1);
 gets(s2);
 for(i=0;*(s+i)!='\0';i++)
 {
  for(j=i,k=0;(*(s+j)!='\0')&&(*(s1+k)!='\0')&&(*(s+j)==*(s1+k));j++,k++);
  if(k==strlen(s1))
  {
   for(j=i,k=j+strlen(s1);k<strlen(s);k++,j++)
    *(s+j)=*(s+k);
   *(s+j+strlen(s2))='\0';
   for(j=--j+strlen(s2),k=j-strlen(s2);k>=i;j--,k--)
    *(s+j)=*(s+k);
   for(j=i,k=0;*(s2+k)!='\0';j++,k++)
    *(s+j)=*(s2+k);
    m=m+1;
  }
  if(m!=0)
  break;
 }
 puts(s);
}
