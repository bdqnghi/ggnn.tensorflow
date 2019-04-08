void main()
{
   char s1[50],s2[50];
   int i,length,j=0;
   scanf("%s",s1);
   scanf("%s",s2);
   length=strlen(s1);
   for(i=0;i<length;)
      {
       if(s1[i]!=s2[j])  {i=0;j++;}       
       else  {i++;j++;}
       }
   printf("%d",j-length);
}