int main ()
{
	int n, i, j, a, b, k, f;
	for(i=0;;i++)
	{   
		char str[14]={0},sub[4]={0},str1[14]={0}, c;/*???????*/
		a=0;j=0;b=0;f=0;k=0;n=0;		
		gets(str);		
		if (str[0]==0)
			break;	
		k=strlen(str);
		while (str[j] !=' ')
		{	str1[j]=str[j];	/*??str1*/
			j++;}
		n=strlen (str1);
		b=j+1;
		while (	b<k && f<3)
		{sub[f]=str[b];/*??sub*/
			b++;f++;}
		c=str1[0];
		for (j=1;j<n;j++)
		{
			if (c<str1[j])
				c=str1[j];/*?????*/			
		}
		for (j=0;j<n;j++)
		{
			if(str1[j]==c)
			{
				a=j+1;/*???*/
				break; 
			}
		}
		for (j=0;j<a;j++)
		{
			printf("%c",str1[j]);
		}
		printf("%s",sub);
		for (j=a;j<n;j++)
		{
			printf("%c",str1[j]);
		}
		printf("\n");    	
	}	

} 