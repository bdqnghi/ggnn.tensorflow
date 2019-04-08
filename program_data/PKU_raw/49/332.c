int main()
{
    char s[1000];
    int i,j,k,l,t; 
    gets(s);
    l=strlen(s);
    for(j=1;j<l;j++)
	{
        for(i=0;i+j<l;i++)
		{
            for(k=0;k<=j;k++)
			{ 
				if(s[i+k]==s[i+j-k])
                    t=1;
                else 
				{
					t=0;
					break;
				}
			}
            if(t==1)
			{
				for(k=i;k<=i+j;k++)
                printf("%c",s[k]);
                printf("\n");
			}
		}
	}
	return 0;
}
