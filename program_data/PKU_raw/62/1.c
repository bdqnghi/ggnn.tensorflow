int main()
{
    char string[100];
    gets(string);
    int i,j;
    int num;
    int count=0;
    num=strlen(string);
    for(i=1;i<num;i++)
    {
                    if(string[i]==' '&&string[i-1]==' ')
                    {
                                    for(j=i;j<num;j++)
                                    {
                                    string[j]=string[j+1];
                                    }
                                    count++;
                                    string[num-count]='\0';
                                    i=i-1;
                    }
                    
    }
    puts(string);                
    return 0;
    }