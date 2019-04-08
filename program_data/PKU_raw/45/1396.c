int main()
{
	char s[50],w[50];
	int i,j,k,a=0,b=0,c=0;
	int lens=0,lenw=0;
	scanf("%s%s",s,w);
	a=strlen(s);
	b=strlen(w);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			for(k=0;k<b-j;k++)
			{
			    if(s[i]==w[j+k])
				{
				    c=j+k;
			        break;
				}
			}break;
		}break;
	}
	printf("%d",c);
	return 0;
}