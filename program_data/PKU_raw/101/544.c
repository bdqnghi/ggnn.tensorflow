main ()
{
int a,b,c,i,j;
int s[3];
char n;
for (a=0;a<3;a++)
{
    for (b=0;b<3;b++)
    {
        for (c=0;c<3;c++)
        {
            s[0]=(a<b)+(a==c);
            s[1]=(a>b)+(a>c);
            s[2]=(b<c)+(b>a);
            if (((s[0]+a)==(s[1]+b)&&(s[1]+b)==(s[2]+c))&&(a!=b)&&(a!=c)&&(b!=c))
                {
                    for (i=0;i<3;i++)
                    {
                        for (j=0;j<3;j++)
                        {
                            if ((s[j]+i)==2)
                            {
                                n=65+j;
                                printf("%c",n);
                            }

                        }
                    }
                }
        }
    }
}

}
