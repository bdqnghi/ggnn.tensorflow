int main()
{
	int i,j;
    char c,s[1000];
    scanf("%s", s);
    for (i=0;i<=999;i++)
    {
		if (s[i]>'Z')
        s[i]=s[i]-32;
		}
        c=s[0];j=1;
        for (i=1;i<=strlen(s);i++)
        {
			if (s[i]==c)
            j++;
            else 
            {  
				printf("(%c,%d)",c,j);
	            j=1;c=s[i];
	  
            }

        }
        return 0;

}
