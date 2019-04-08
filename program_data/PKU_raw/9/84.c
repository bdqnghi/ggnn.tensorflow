struct patient
{
	char id[10];
	int old;
}pa[100];
void main()
{
	int n,i,j=0,k=0,t;
	struct patient pao[100],pay[100],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",pa[i].id,&pa[i].old);

	for(i=0;i<n;i++)
	{
		if(pa[i].old>=60)
		{
			pao[j]=pa[i];
				j++;
		}
		else
		{
			pay[k]=pa[i];
			k++;
		}
	}

	for(i=0;i<j-1;i++)
		for(t=0;t<j-1-i;t++)
			if(pao[t].old<pao[t+1].old)
			{
				temp=pao[t];
				pao[t]=pao[t+1];
				pao[t+1]=temp;
			}

    printf("%s",pao[0].id );
	for(i=1;i<j;i++)
		printf("\n%s",pao[i].id);
	printf("\n%s",pay[0].id);
	for(i=1;i<k;i++)
		printf("\n%s",pay[i].id);
}