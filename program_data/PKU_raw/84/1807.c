
void px(int S[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if (S[j]>S[j-1])
			{
				t=S[j-1];
				S[j-1]=S[j];
				S[j]=t;
			}
		}
	}
}


int main(int argc, char* argv[])
{
	int S[A],n,k,p;
	scanf("%d",&n);
	for (p=0;p<n;p++)
	{
		scanf ("%d",&(S[p]));
	}
    px(S,n);
	printf("%d\n%d\n",S[0],S[1]);
	


        

	return 0;
}