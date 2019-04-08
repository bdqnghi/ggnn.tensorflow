

 

int judge(char c)

{

    return (!(c=='A' || c=='T' || c=='C' || c=='G'));

}

 

int main()

{

    double n;

    int icount = 0;

    int flag = 0;

    char s[600],t[600];

    scanf("%lf%s%s",&n,s,t);

    int len1 = strlen(s), len2 = strlen(t);

    if(len1 != len2)

        printf("error\n");

    else

    {

        for(int i = 0; i < len1; ++i)

        {

            if(s[i] == t[i]) icount ++;

            if(judge(s[i])||judge(t[i])){flag = 1;break;}

        }

        if(flag)

            printf("error\n");

        else

        {

            if(1.0*icount/len1>=n)printf("yes\n");

            else printf("no\n");

        }

    }

    return 0;

}
