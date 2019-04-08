int main(int argc, char* argv[])
{
	char a[1000],b[1000];
	int c[100],k1,k2,t1[100]={0},t2[100]={0},e=0,i,j;
	scanf("%s %s",a,b);
	k1=strlen(a);
	k2=strlen(b);
	if(k1!=k2)
	printf("NO");
	else if(k1==k2)
	{
		for(i=0;i<k1;i++)
		{
			if(t1[i]==0)
			{
				for(j=0;j<k1;j++)
				{
					if(t2[j]==0)
					{
						if(a[i]==b[j])
						{
							t1[i]=1;
					        t2[j]=1;
							break;
						}
					}
				}
			}
		}
		for(i=0;i<k1;i++)
		e=e+t1[i];
		if(e==k1)
		printf("YES");
		else
		printf("NO");
	}
	return 0;
}