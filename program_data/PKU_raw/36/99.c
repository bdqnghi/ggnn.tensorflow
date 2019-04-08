int main ()
{   
	int judge=0;
	char *a,*b,*c;
    a=(char *)malloc(30);
	b=(char *)malloc(39);
	c=b;
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(b)!=strlen(a))   printf("NO\n");
	else
	{
		 for(;*a;a++)
		{
		 for(b=c,judge=0;*b;b++)
		 
			if(*a==*b)  {judge=1;*b=' ';break;}
		 
         if(judge==1)    continue;
		 if (judge==0)    {printf("NO\n");break;}
		}
         if (judge==1)    printf("YES\n");
	}		
	return 0;
}
