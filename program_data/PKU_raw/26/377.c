main()
{    
     char s[100];
     gets(s);
     
     char ss[100];
      ss[0]=s[0];
     int i,k=1;
     for(i=1;s[i]!='\0';i++)
            if(s[i]!=' '||s[i]==' '&&s[i-1]!=' ')ss[k++]=s[i];
          ss[k]='\0'; 
     puts(ss);
     getchar(); 
}
