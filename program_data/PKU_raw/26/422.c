int main()
{
    char str[100],str2[100];
    int i,j,l,sum;
    gets(str);
    l=strlen(str);
    j=0;
    sum=0;
    for(i=0;i<l;i++)
    {
            if(i==0&&str[i]==' ')
            continue;
            if(str[i]==' ')
            {
                         if(str[i+1]==' '||str[i+1]=='\0')
                         continue;
                         else
                         {
                             str2[j]=str[i];
                             j++;
                         }
            }
            else
            {
                str2[j]=str[i];
                j++; 
            }
           
     }     
     str2[j]='\0';
     puts(str2);
     getchar();
     getchar();
}  
