
int main()
{
    int i,j,slen,alen /*,blen */;
    char *ss[/* Too Large:300*/2],s[256],s1[256],s2[256];
    int flag = 0;
    gets(s);
    gets(s1);
    gets(s2);
    slen=strlen(s);
    alen=strlen(s1);
    /* no NEED
    blen=strlen(s2);
    */

    for(i=0;i<slen-alen+1;i++)
    {
        for(j=0;j<alen;j++)
        {
            if(s[i+j]!=s1[j])
            {
                break;
            }
        }
        if(j==alen)
        {
            ss[1]=&s[i+j/*skip the substring matched, +alen+1 */];
            s[i/* end the original string:+j+1*/]='\0';
            ss[0]=s;
            flag = 1; /* find the substring */

            break;
        }
    }
    if (flag == 0)
        printf("%s\n", s);
    else
        printf("%s%s%s\n", ss[0], s2, ss[1]);

    return 0;
}
