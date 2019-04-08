
void match(char a[102])
{
    char b[102]={0};
    long l=strlen(a);
    int i,left[102]={0},cnt_left=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='(')
        {cnt_left++;left[cnt_left]=i;b[i]='$';}
        else
        {
            if(a[i]==')')
            {
                if(cnt_left==0)
                    b[i]='?';
                else
                {b[i]=' ';b[left[cnt_left]]=' ';cnt_left--;}
            }
            else
                b[i]=' ';
        }
    }
    b[l]='\0';
    puts(a);
    puts(b);
}

int main()
{
    char a[102]={0},c;
    int i=-1;
    while((c=getchar())!=EOF)
    {
        if(c!='\n')
        {
            i++;
            a[i]=c;
        }
        else
        {
            i++;a[i]='\0';match(a);i=-1;
        }
    }
    return 0;
}