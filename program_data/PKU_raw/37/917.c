int main()
{
    char str[100000];
    char *p;
    int n,i;
    scanf("%d",&n);
    gets(str);
    for (i=0;i<n;i++)
    {	
		int times[256]={0};
        gets(str);
        p=str;
        while('\0'!=*p)
        {
             times[*p]++;
             p++;
        }
        p=str;
        while('\0'!=*p)
        {
             if(1==times[*p])
             {
                printf("%c\n",*p);
                break;
              }
			 p++;
        }
        if ('\0'==*p)
           printf("no\n");
     }
     return 0;
}