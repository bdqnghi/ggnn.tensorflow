
int main()
{
        char s1[256],s2[256];
        int n,l,i,j=0,k=0;
        gets(s1);
        l=strlen(s1);
        for(i=0;i<l;i++)
        {
                if (s1[i]!=' ')
                {
                        k=0;
                        s2[j]=s1[i];
                        j++;
                }
                else if (s1[i]==' '&&k==0)
                {
                        k=1;
                        s2[j]=s1[i];
                        j++;
                }
        }
        printf("%s",s2);
}