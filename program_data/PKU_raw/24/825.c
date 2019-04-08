int main ()
{  
	char s[1000];
	gets(s);
	int start,i=0,max=0,z=0,big=0,small=100,min=0;
	while(s[i]!='\0')
	{
		int total=0;
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{ 
			start=i;
			z++;
			while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) 
			{
				total++;
				i++;
			}
			if(total>big)
			{
				max=start;
				big=total;
			}
			if(total<small)
			{
				min=start;
				small=total;
			}			
		}
		else
			i++; 
	}
	i=max;
	while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) 
	{
		printf("%c",s[i]);
		i++;
	}
	printf("\n");
    i=min;
	while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) 
	{
		printf("%c",s[i]);
		i++;
	}
	return 0;
} 