main()
{
	char ch1[80],ch2[80],a;
	int i,j;
	gets(ch1);
	gets(ch2);
	for(i=0;(ch1[i]!='\0')&&(ch2[i]!='\0');i++)
	{   
		if(ch1[i]>90)
			ch1[i]=ch1[i]-32;
		if(ch2[i]>90)
			ch2[i]=ch2[i]-32;
		j=ch1[i]-ch2[i];
		if(j!=0)
		{
			if(j<0)
				a='<';
			else
				a='>';
			break;
		}
		else 
			a='=';
	}
    printf("%c",a);
	return 0;
}