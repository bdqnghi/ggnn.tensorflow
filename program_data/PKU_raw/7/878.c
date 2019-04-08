int main()
{char *p1,*p2,*p3,*q1,*q2;
 int i,j,k,flag;
 p1=(char*)malloc(sizeof(char)*256);
 p2=(char*)malloc(sizeof(char)*256);
 p3=(char*)malloc(sizeof(char)*256);
 q1=(char*)malloc(sizeof(char)*256);
 q2=(char*)malloc(sizeof(char)*256);
 gets(p1);gets(p2);gets(p3);
 for(i=0;i<strlen(p1);i++)
 {flag=1;
  for(j=0;j<strlen(p2);j++)
  if(*(p1+i+j)!=*(p2+j)) {flag=0;break;}
  if(flag)
  {for(k=0;k<i;k++)
   *(q1+k)=*(p1+k);
   *(q1+k)='\0';
   for(k=i+strlen(p2);k<strlen(p1);k++)
   *(q2+k-i-strlen(p2))=*(p1+k);
   *(q2+k-i-strlen(p2))='\0';
   break;}
  }
 if(flag){
 strcat(q1,p3);
 strcat(q1,q2);
 puts(q1);}
 else
 puts(p1);
}