int main()
{
	char s1[256]={'\0'},s2[256]={'\0'},s3[256]={'\0'},t[256]={'\0'};
	int i,j,k=0,s,l1,l2,l3;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
    for(i=0;i<l1;)
	{
		for(j=0;j<l2;j++)
		{
			if(i+j>=l1 || s1[i+j]!=s2[j])				{
				break;				
			}
		}
		if(j==l2)
		{
			for(s=0;s<l3;s++)
			{
				t[k]=s3[s];
				k++;
			}
			i=i+l2;
			break;	
		}
		else
		{
			t[k]=s1[i];
			i++;
			k++;
		}
	}
	for(; i<l1; i++)
	{
		t[k] = s1[i];
		k++;
	}
	t[k] = '\0';	
	printf("%s", t);
    return 0;
}