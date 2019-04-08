int main()
{
	char str[200],zfc[200],x;
	int i,j,h,len1,len2,m=0,n=0,s;
	scanf("%s %s",str,zfc);
	len1=strlen(str);
	len2=strlen(zfc);
	if(len1!=len2)
	{printf("NO");}
	else
	{
    	for(i=0;i<len1;i++)
		{s=0;m=0;
	    	for(j=0;j<len2;j++)
			{
		    	if(str[i]==zfc[j])
				{
			    	m++;
				}
			}
			x=str[i];
			for(h=0;h<len1;h++)
			{	
				if(str[h]==x)
				{s++;}
			}
	    	if(m!=s)
			{
			printf("NO");
			break;
			}
	    	else
			{n++;}
		}
	    if(n==len1)
		{printf("YES");}
	}
	return 0;
}