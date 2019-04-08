main()
{
    char string[1001];
    int time,m,n,i,j,k;
    gets(string);
    m=strlen(string);
    for (i=0;i<m;i++)
    {
    	if (string[i]>='a'&&string[i]<='z')
    	    string[i]=string[i]-32;
    }
    time=1;
    for (i=0;i<m;i++)
    {
		if (string[i+1]==string[i])
		{
			time=time+1;
		}
		else 
		{
			printf ("(%c,%d)",string[i],time);
			time=1;
		}
    }
}