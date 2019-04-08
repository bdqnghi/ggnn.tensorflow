
int main()
{
	char c[20], d[20];
	int i, logo=1;
	gets(c);gets(d);
    for(i=0; c[i] !='\0' && d[i] != '\0'; i++)
	{
		if(c[i]>='A' && c[i]<='Z')
            c[i]+=('a'-'A');
        if(d[i]>='A' && d[i]<='Z')
			d[i]+=('a'-'A');
		if(c[i] != d[i])
		{
			logo=0;
		    if(c[i] > d[i])
			{
				printf(">\n");
			    break;
			}
            else if(c[i] < d[i])
			{
	            printf("<\n");
		        break;
			}                            
		}
    }
	if(logo==1)
		printf("=\n");
	return 0; 
}