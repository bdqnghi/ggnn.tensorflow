int main()
{
	char s[100], a[100], b[100], ans[100], temp[100];
	int i, j, templ, tempans;
	gets(s);
	gets(a);
	gets(b);	
	templ=0;
	tempans=0;
	for (i=0;i<strlen(s);i++)
	{
		if (s[i] == ' ') 
		{
			temp[templ]='\0';
			if (strcmp(temp, a) == 0) 
			{
				for (j=0;j<strlen(b);j++) 
				{
					ans[tempans] = b[j];
					tempans++;
				}
			}
			else
			{
				for (j=0;j<templ;j++) 
				{
					ans[tempans] = temp[j];
					tempans++;
				}
			}
			ans[tempans]=' ';
			tempans++;
			templ = 0;
			continue;
		}
		temp[templ]= s[i];
		templ++;
	}
		temp[templ]='\0';
			if (strcmp(temp, a) == 0) 
			{
				for (j=0;j<strlen(b);j++) 
				{
					ans[tempans] = b[j];
					tempans++;
				}
			}
			else
			{
				for (j=0;j<templ;j++) 
				{
					ans[tempans] = temp[j];
					tempans++;
				}
			}
		ans[tempans] = '\0';
	printf("%s", ans);
	return 0;
}