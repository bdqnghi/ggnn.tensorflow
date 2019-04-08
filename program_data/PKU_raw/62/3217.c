
int main()
{
    char zfc[266],*a,*k;
    int n,i,j,s,c=0;
    gets(zfc);
    s=strlen(zfc);
    for(i=0;i<s;i++)
        {
            for(a=zfc;*a!='\0';a++)
                {
                    if(*(a-1)==' '&&*a==' ')
                        {
                            for(a=a;*a!='\0';a++) *a=*(a+1);
                        }
                }
        }
    puts(zfc);
    return 0;
}



