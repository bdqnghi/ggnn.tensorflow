int main()
{
    int i, j, n;      
    scanf("%d", &n);         
    for (i = 0; i < n; i++) 
	{   
        char s[1000]; 
        scanf("%s\n", s);
        int l=strlen(s);
        s[l]='\0';
        int flag=1;
        for (int j=0;j<l;j++)
        {if (!(  (s[j] == '_') 
                 ||(s[j] >= 'A' && s[j] <= 'Z') 
                 ||(s[j] >= 'a' && s[j] <= 'z')
                 ||(s[j] >= '0' && s[j] <= '9' && j > 0)
               ))
        	{flag=0;break;}
       	}
        if (flag==1){printf("yes\n");}
        else if(flag==0){printf("no\n");}
 }
    	return 0;
}

