int main()
{
	char ch[200],t[2];
	int i,j,l,g,b;
	gets(ch);
    l=strlen(ch);
    t[0]=ch[0];
    t[1]=ch[l-1];
    for(i=1;i<l;i++)
    {
        g=1;
        b=0;
        if(ch[i]!=0)
        {
        if(ch[i]==t[1])
        {
            for(j=i-1;j>=0;j--)
            {
                if(ch[j]==t[1])
                {
                    g++;
                }
                else if(ch[j]==t[0])
                {
                    b++;
                }
                if(g==b)
                {
                    ch[i]=0;
                    ch[j]=0;
                    printf("%d %d\n",j,i);
                    break;
                }

            }
        }
        }
    }

	return 0;
}
