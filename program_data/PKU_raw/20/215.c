void main()
{
       char str[15];
       char substr[3];
       char string[500][15];
       char max;
       int i,x,d,j ;
       j=0;

    while (gets(str)!=NULL)
        {
           // gets(str);

           d=strlen(str);
if (d==0) break;
                       for (i=0;i<d;i++)
                       if (str[i]==' ')
                               break;
                       for (x=i+1;x<=i+4;x++)
                               substr[x-i-1]=str[x];
                       str[i]='\0';
                       d=d-3;
           max=str[0];
               x=0;
               for (i=0;str[i]!='\0';i++)
              if (str[i]>max)
                       {
                               max=str[i];
                    x=i;
                       }
            for (i=d-1;i>x;i--)
               str[i+3]=str[i];
               for (i=x+1;i< x+4;i++)
                       str[i]=substr[i-x-1];
               strcpy (string[j] ,str );
               string[j][d+3]='\0';
               j=j+1;

        }
       for (i=j;i<500;i++)
       string[i][0]='\0';
 for (i=0;i<j;i++)
        printf("%s\n",string[i]);
}