int main()
{
	int length_s,length_a,length_b,i,j,k;
	char s[128],a[128],b[128];
	gets(s);
	gets(a);
	gets(b);
	length_s=strlen(s);
	length_a=strlen(a);

	for(i=0;i<length_s;i++)
	{
		j=0;		
		if( s[i]==a[j] && (i==0 || s[i-1]==' ')   )
		{
			k=i;
			while(s[i]==a[j] && s[i]>0)
			{
				j++;
				i++;				
			}
			
			if(j==length_a)
			{
				printf("%s",b);
				i--;
			
			}
			
			else 
			{
				while(k<=i)
				{
					printf("%c",s[k]);
					k++;
				}
			}
			
		}
		else 
			printf("%c",s[i]);
	}
	
	return 0;
}