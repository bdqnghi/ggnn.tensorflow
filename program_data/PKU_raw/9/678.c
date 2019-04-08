struct person
{
	char id[20];
	int y;
};
void main()
{
	int n,i,j,m=0,k=0;
	struct person t,*s,o[1000],y[1000];
	scanf("%d",&n);
	s=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++)
	scanf("%s %d",s[i].id,&s[i].y);
	for(i=0;i<n;i++)
		if (s[i].y>=60)  {o[k]=s[i];k++;}
		else {y[m]=s[i];m++;}
	for(i=0;i<k;i++)
	{for(j=0;j<k-i;j++)
			if (o[j].y<o[j+1].y) {t=o[j];o[j]=o[j+1];o[j+1]=t;}

	}
		for(i=0;i<k;i++)
				printf("%s\n",o[i].id);

	for(i=0;i<m;i++)
 printf("%s\n",y[i].id);

}
