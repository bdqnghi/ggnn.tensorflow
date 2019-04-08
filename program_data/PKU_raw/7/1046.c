int main()
{
    char string[256];
    char substring[256];
    char replacement[256];
    scanf("%s",string);
    scanf("%s",substring);
    scanf("%s",replacement);
    int lenth=0;
    int judge=0;
    for(int i=0;substring[i]!='\0';i++)
    {
        lenth++;    
    }
    for(int i=0;i<256;i++)
    {
        if(string[i]==substring[0])
        {
            int count;
            for(count=0;substring[count]!='\0';count++)
            {
                if(string[i+count]!=substring[count])
                {
                    break;                         
                }    
            }
            if(count==lenth)
            {
                for(int j=0;j<i;j++)
                {    
                    printf("%c",string[j]);
                }
                printf("%s",replacement);
                for(int j=i+lenth;string[j]!='\0';j++)
                {
                    printf("%c",string[j]);    
                }
                judge=1;      
                break;      
            }                      
        }    
    }
    if(judge==0)
    {
        printf("%s",string);            
    }
    return 0;
} 