void main()
{
         char *p;
         int i;
         p=(char*)malloc(200*sizeof(char));
         gets(p);
         char *p1;
          p1=(char*)malloc(200*sizeof(char));
         for(i=0;i<strlen(p)-1;i++)
         {
                
                 *(p1+i)=*(p+i)+*(p+i+1);
                 }
         *(p1+i)=*p+*(p+i);
         for(i=0;i<strlen(p);i++)
         printf("%c",*(p1+i));
         

}
