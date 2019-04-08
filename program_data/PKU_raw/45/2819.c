int main()
{
	char s[50], w[50];
	int i, j=0, mark=0;
	scanf("%s %s", s, w);
	for (i=0; i<strlen(s); i++)
	{
		while (j<strlen(w))
		{
		    if (s[i]==w[j])
			{
				mark=j;
				j=mark+1;
				break;
			}   
			else 
			{
				j++;
			}
		
		}
		
	}
	printf("%d", mark-strlen(s)+1);
	
		return 0;
}