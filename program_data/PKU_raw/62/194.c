main()
{
     char a[200];
     gets(a);
     int i,j;
     int len=strlen(a);
     char b[200];
     j=0;
     for(i=0;i<len;i++)
     {
         if((a[i]!=' '&&a[i+1]!=' '))
         {b[j]=a[i];
          j++;
          }
         else if((a[i]!=' ')&&(a[i+1]==' '))
         {b[j]=a[i];
          b[j+1]=a[i+1];
          j=j+2;
          i++;}
         
     }
     for(i=0;i<j;i++)
     printf("%c",b[i]);
      
}

