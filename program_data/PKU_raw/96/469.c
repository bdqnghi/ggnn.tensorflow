
int main(void)
{
    int i, j=0 ,k=0 ,n,t=0, ok=0;
    char str[MAX], output[MAX];
    gets(str);
    n = strlen(str);


    while ((k<n))
    {
        t = t*10 + (str[k]-'0');
        k++;
            //printf("%d\n",t);
        if(t>13)
        {
            ok=1;
            // putchar(output[j-1]);
        }
        if(ok)
        {   output[j]=('0'+t/13);
            //printf("%d\n",t/13);
            t = t%13;
            j++;
        }


        //printf("%d\n",(str[n]-'0')*10);

        //printf("%d\n",t);
    }
    output[j]='\0';
    if(ok)
    puts(output);
    else
    printf("0\n");
    printf("%d",t);
    return 0;
}
