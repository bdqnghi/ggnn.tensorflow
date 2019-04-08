int main()
{
    int i,b=0;
    char s[80],s0[20],s2[20],s3[20];
    char s1[100]={'\0'};
    gets(s);
    gets(s0);
    gets(s2);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ') 
        {
             s3[b]=s[i];
             b++;
        }
        if(s[i]==' ')
        {
            s3[b]='\0';
            if(strcmp(s3,s0)==0)
            {
                  strcat(s1,s2);
                  strcat(s1," ");
            }
            else
            {
                  strcat(s1,s3);
                  strcat(s1," ");
            }
            b=0;
        }
      }
       s3[b]='\0';      
      if(strcmp(s3,s0)==0)
      {
                  strcat(s1,s2);
       }
      else
      {
                  strcat(s1,s3);
       }
      puts(s1);
      return 0;
}
           
            