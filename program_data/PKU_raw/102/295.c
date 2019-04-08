int main()
{
	int n,i,k;
	char zfc[100][20],es[20];
	double h[100],eh;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",zfc[i],&h[i]);
	}
    for(k=1;k<n;k++)
	{
		for(i=0;i<n-k;i++)
		{
            if((strcmp(zfc[i],"female")==0&&strcmp(zfc[i+1],"male")==0)||(strcmp(zfc[i],"male")==0&&strcmp(zfc[i+1],"male")==0&&h[i]>h[i+1])||(strcmp(zfc[i],"female")==0&&strcmp(zfc[i+1],"female")==0&&h[i]<h[i+1]))
			{
				strcpy(es,zfc[i]);
				strcpy(zfc[i],zfc[i+1]);
				strcpy(zfc[i+1],es);
				eh=h[i];
				h[i]=h[i+1];
				h[i+1]=eh;
			}
		}
	}
	printf("%.2lf",h[0]);
	for(i=1;i<n;i++)
	{
		printf(" %.2lf",h[i]);
	}
	return 0;
}
