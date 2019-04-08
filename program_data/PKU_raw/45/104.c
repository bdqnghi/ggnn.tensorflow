int main ()
{
	char s1[50],s2[50];
	int i,j,d;
	scanf ("%s %s",&s1,&s2);
	int l = strlen (s1);
	for (j=0;s2[j]!='\0';j++)
		{
			if (s1[0]==s2[j]) 
			{
				d = j;
				break;
			}
		}
	for (i=1;i<l;i++,j++)
	{
		if (s1[i]==s2[j+1]) continue;
	}
	printf ("%d",d);
		
					

	return 0;
}