int main()
{
	char s1[100],s2[100],temp,a;
	scanf("%s %s",&s1,&s2);
	int i,j,k=0,l,m,n;
	m=strlen(s1);
	n=strlen(s2);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<m;j++)
		{
			if(s1[j]!=s2[j])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			printf("%d\n",i);
			break;
		}
		else
		{
			a=s2[0];
			for(l=0;l<n-1;l++)
			{
				temp=s2[l];
				s2[l]=s2[l+1];
				s2[l+1]=temp;
			}
			s2[n-1]=a;
		}
	}
	return 0;
}
			
		