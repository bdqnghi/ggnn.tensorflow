void main()
{
    char origin_string[81];
    int n,i,j,length;
    int check=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(origin_string);
        length=strlen(origin_string);
        if(origin_string[0]=='_'||(origin_string[0]>='A'&&origin_string[0]<='Z')||(origin_string[0]>='a'&&origin_string[0]<='z'))
		{
			check=1;
		}
        else  
		{
			check=0;
		}
        for(j=1;j<length;j++)
        {
            if(check==1)
            {
				if(origin_string[j]==' ')
				{
				      check=0;
					  break;
				}

	            if(origin_string[j]=='_'||(origin_string[j]>='A'&&origin_string[j]<='Z')||(origin_string[j]>='a'&&origin_string[j]<='z')||(origin_string[j]>='0'&&origin_string[j]<='9'))
				{
					check=1;
				}
				else
				{
				    check=0;
					break;
				}
			}
        }
        printf("%d\n",check);
    }
}