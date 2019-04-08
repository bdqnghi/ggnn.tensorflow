int main()
{char s1[80],s2[80],*p,*q;
 gets(s1);
 gets(s2);
 p=s1;
 q=s2;
 int i;
 for(i=0;*(p+i)!='\0';i++){
 if('a'<=*(p+i)&&*(p+i)<='z')
    *(p+i)=*(p+i)-32;
 }
 for(i=0;*(q+i)!='\0';i++){
 if('a'<=*(q+i)&&*(q+i)<='z')
    *(q+i)=*(q+i)-32;
 }
 int t=strcmp(s1,s2);
 if(t>0)
 printf(">");
 else if(t<0)
 printf("<");
 else if(t==0)
 printf("=");
return 0;
}
