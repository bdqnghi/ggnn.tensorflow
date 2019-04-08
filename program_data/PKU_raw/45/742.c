int main()
{
	char s[50],w[50];
	scanf("%s",s);
	scanf("%s",w);
	
	int a,b,i,j;
	a=strlen(s),b=strlen(w);

	for(j=0;j<b;j++)
	{
		if(s[0]==w[j])
		{
			for(i=0;i<a;i++)
			{
				j++;
				if(s[i+1]!=w[j])
					break;
				else if(i+1==a-1)
				{
					j=j-a+1;
					printf("%d\n",j);
				}
			}
			if(i==a-1)
			break;
		}	
	
	}

	return 0;
}