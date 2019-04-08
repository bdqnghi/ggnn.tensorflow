void function(char *str,char *substr)
{
 int i,max,position;
 for(i=1,max=str[0],position=0;str[i]!='\0';i++)
     if(str[i]>max)
       {
        max=str[i];
        position=i;
       }
 str[i+3]='\0';
 for(i-=1;i>position;i--)
     str[i+3]=str[i];
 str[position+1]=substr[0];
 str[position+2]=substr[1];
 str[position+3]=substr[2];
}     
            
int main()
{
    char str[15],substr[4];
    scanf("%s %s",str,substr);
  while(getchar()!=EOF)
    {
     function(str,substr);
     printf("%s\n",str);
     scanf("%s %s",str,substr);
    } 
    return 1;
}

