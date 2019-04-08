int main(void)
{
	int n,MEDIA=0;scanf("%d",&n);
	int NUMO[n];int k=0;
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&MEDIA);
		for(int j=0;j<k;j++)
		{
			if(NUMO[j]==MEDIA) goto SPEEEE;
		}
		NUMO[k]=MEDIA;
		k++;
		SPEEEE: ;
	}
	for(int i=0;i<k-1;i++)
	printf("%d,",NUMO[i]);
	printf("%d",NUMO[k-1]);
}