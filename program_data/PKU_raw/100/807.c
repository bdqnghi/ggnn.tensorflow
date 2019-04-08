
int main(int argc, char* argv[])
{
	char *ps,str[300],i;
    int count=0;
	scanf("%s",str);
    for(ps=str;*ps!='\0';ps++)
    {
         if(*ps>='a'&&*ps<='z')
         count++;
    }
         if(count==0)
         printf("No");
         else         
         {
             for(i='a';i<='z';i++)
             {  
                 count=0;   
                 for(ps=str;*ps!='\0';ps++)
                 if(*ps==i)
                 count++;
                 if(count!=0)
                 printf("%c=%d\n",i,count);
             }  
         }     
      return 0;

}