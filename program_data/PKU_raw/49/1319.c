int main()
{
   char p[501];
   scanf("%s",p);
   int len=strlen(p);
   for(int i=2;i<len;i++)
       {
       char **q=(char **)malloc(sizeof(char *)*len);
       for(int j=0;j<len-i+1;j++)
           {
               q[j]=(char *)malloc((i+1)*sizeof(char));
               for(int h=0;h<i+1;h++)
                   q[j][h]='\0';
               for(int h=0;h<i;h++)
                   q[j][h]=p[j+h];
           }   
       for(int j=0;j<len-i+1;j++)
            {
            char temp[501]={'\0'}; 
            int k=0;
            for(int h=i-1;h>=0;h--)
                {
                temp[k]=q[j][h];
                k++;   
                } 
            if(strcmp(temp,q[j])==0) 
               printf("%s\n",q[j]);                    
            }
       }         
}
