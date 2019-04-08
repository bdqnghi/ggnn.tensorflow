int main ()
{
	char s[50],w[50];
	int l1,l2,i,j,a;
	scanf("%s %s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	for (j=0;j<(l2-l1+1);j++)
	{
		a=0;
	    if(w[j]==s[0])
		{
			for (i=1;i<l1;i++)
			{
				if (w[j+i] == s[i])
					a=1;
				else 
					a=0;
			}
			if (a==1)
			{
				printf("%d\n",j);
				break;
			}
			else
				continue;
		}
		else
		continue;
	}
}