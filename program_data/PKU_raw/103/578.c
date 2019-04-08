main()
{
     int i,j,a=1;
     char str[1010];
      char str2[1010];
     scanf("%s",str);
     for (int j=0;;j++)
    { if (str[j]=='\0') { str2[j]='\0';break;}
     if (str[j]>='a' && str[j]<='z') str2[j]=str[j]-'a'+'A';
     else str2[j]=str[j];}
     
     for (i=0;i<strlen(str2);i++)
     {  
        
         if (str2[i]==str2[i+1])
         a++;
         else { printf("(%c,%d)",str2[i],a);a=1; continue;}
     }
         
       
    
}      
