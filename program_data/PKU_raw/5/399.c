int main()
{
double d;
scanf("%lf",&d);
char s[100];
char u[100];
scanf("%s %s",s,u);
int f=0;
int t=0,i,r=0;
	for(i=0;s[i]!='\0';i++)
	{
		t++;
	}
for(i=0;u[i]!='\0';i++)
	{
		r++;
	}
if(r!=t)
{
	printf("error\n");
	return 0;
}
else
{	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')
		{
			printf("error\n");
		    return 0;
		}
		else if(u[i]!='A'&&u[i]!='T'&&u[i]!='C'&&u[i]!='G')
		{	
			printf("error\n");
	    	return 0;
		}
        else if(s[i]==u[i])
		{
			f++;
		}
}
        if(f*1.0/t>=d)
		{
		printf("yes\n");
		return 0;
		}
    	else
		{
		printf("no\n");
		return 0;
		}

}
    return 0;
}
