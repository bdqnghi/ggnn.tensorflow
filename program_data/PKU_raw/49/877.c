
int main()
{
    int i,i1,d,sum=0;                 //d??????????d?2?3?4?5?6???
    int pl[500]={0};
    int sl[500]={0};
    char s[500];
    
    scanf("%s",s);
    
    for (i=0; s[i]!='\0'; i++) {                 
        if (s[i]==s[i+1]) {
            printf("%c%c\n",s[i],s[i+1]);
            pl[i]=pl[i+1]=2;
        }
    }
    for (i=0; s[i]!='\0'; i++) {
        if (s[i]==s[i+2]) {
            printf("%c%c%c\n",s[i],s[i+1],s[i+2]);
            sl[i+1]=3;
        }
    }
    
    
    for (d=4; d<=strlen(s); d++)
    {
        if (d%2==0)
        {
            for (i=0; s[i]!='\0'; i++,sum=0)
            {
                if (pl[i+d/2-1]==(d-2)&&pl[i+d/2]==(d-2)&&s[i+d-1]==s[i])
                {
                    for (i1=i; i1<i+d-1; i1++)
                    {
                        printf("%c",s[i1]);
                    }
                    printf("%c\n",s[i+d-1]);
                    pl[i+d/2-1]=pl[i+d/2]=d;
                }
            }
        }
        if (d%2==1)
        {
            for (i=0; s[i]!='\0'; i++,sum=0)
            {
                if (sl[i+d/2]==(d-2)&&s[i+d-1]==s[i])
                {
                    for (i1=i; i1<i+d-1; i1++)
                    {
                        printf("%c",s[i1]);
                    }
                    printf("%c\n",s[i+d-1]);
                    sl[i+d/2]=d;
                }
            }
        }
    }
    return 0;
}
