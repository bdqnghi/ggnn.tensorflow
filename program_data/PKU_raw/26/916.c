const int maxLen = 1000;

char s[maxLen+1];
char t[maxLen+1];
int main()
{
    int i,len;
    int index ;
    while(gets(s)!=NULL)
    {
        len = strlen(s);
        for(i=0;s[i]==' ';i++) ;  // ?????? 
        
        index = 0;
        for(;i<len;i++)
        {
            if(s[i]!=' ')
            {
                t[index++] = s[i]; //???????????? 
            }
            else
            {
                if(s[i-1] != ' ') t[index++] = ' '; //????????????? 
            }
        }      
        if(index>0&&t[index-1]==' ')t[index-1]='\0';  //??????????
        else t[index] = '\0';
        puts(t);
    }
    
    return 0;        
}
