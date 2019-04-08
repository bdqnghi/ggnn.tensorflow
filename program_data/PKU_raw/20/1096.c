
int main()
{
	char string[20]= {'\0'},substring[20]= {'\0'};
    while( scanf("%s%s",string,substring)!=EOF)
    {
        char last[20]= {'\0'},*pointer_begin,*pointer_end;
        int n=0,k=0;

        for(pointer_begin=string,pointer_end=string; pointer_begin-string<strlen(string); pointer_begin++)
            if(*pointer_begin>k)
            {
                k = *pointer_begin;
                pointer_end=pointer_begin;
                n=pointer_end-string;
            }

        strncpy(last,string,n+1);
        printf("%s",last);
        printf("%s",substring);
        printf("%s\n",pointer_end+1);
    }
    return 0;
}
