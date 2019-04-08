int main()
{
    char zfc[257],son[257],re[357],fu[257];
    int i,len,slen,k,t=0;
    gets(zfc);
    gets(son);
    gets(re);
    len=strlen(zfc);
    slen=strlen(son);
    for(i=0;i<=len-slen;i++)
    {
        for(k=i;k<i+slen;k++)
        {
             fu[k-i]=zfc[k];
        }
        fu[slen]='\0';
        if(strcmp(fu,son)==0)
        {
             for(k=0;k<i;k++) 
             {
                printf("%c",zfc[k]);
             }
             printf("%s",re);
             for(k=i+slen;k<len;k++)
             {
                 printf("%c",zfc[k]);
             }
             t=1;  
        }
        if(t==1)
        {
             break;
        }
    }
    if(t==0)
    {
            printf("%s",zfc);
    }
    return 0;
}
                        
                                                          
                              
                                               
    
 
