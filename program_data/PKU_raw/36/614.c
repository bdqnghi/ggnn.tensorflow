

int main()
{
	int i,j,l1,l2;
	char w1[20],w2[20];
	scanf("%s %s",w1,w2);
	l1=strlen(w1);
	l2=strlen(w2);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l1;j++)
				if(w1[i]==w2[j])
				{
					w2[j]=0;
					goto Q;
				}
			printf("NO");
			goto M;
Q:;
		}
		printf("YES");
M:;
	}
	else
		printf("NO");
	return 0;
}
