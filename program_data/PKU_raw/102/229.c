
struct TIME
{
	int start,end;
};
int mycp(const void * e1,const void * e2)
{
	return  *(const int *) e1 - *(const int *) e2;
}
int mycp1(const void * e1,const void * e2)
{
	return  *(const int *) e1 - *(const int *) e2;
}
int mycp2(const void * e1,const void * e2)
{
	return  *(const int *) e2 - *(const int *) e1;
}
int main()
{
	int n =0;
	scanf("%d",&n);
	float man[40],female[40];
	int intman[40],intfemale[40];
	int nm=0,nf=0;
	float temph;
	char gen[10];
	while (n -- )
	{
		
		scanf("%s %f",gen,&temph);
		if(gen[0] == 'm') {
			man[nm] = temph;
			nm ++;
		}
		else if (gen[0] == 'f'){
			female[nf] = temph;
			nf ++;
		}
	}
	for (int i = 0; i< nm; i++)
	{
		intman[i] = 1000 * man[i];
	}
	for (int i = 0; i< nf; i++)
	{
		intfemale[i] = 1000 * female[i];
	}

	qsort(intman,nm,sizeof(int),mycp1);
	qsort(intfemale,nf,sizeof(int),mycp2);

	for (int i = 0; i< nm; i++)
	{
		man[i] = (float)intman[i] / 1000;
	}
	for (int i = 0; i< nf; i++)
	{
		female[i] = (float)intfemale[i]/1000;
	}
	for(int i = 0; i <nm ; i++)
		printf("%.2f ",man[i]);
	for(int i = 0; i <nf ; i++)
		if (i == nf -1)		printf("%.2f\n",female[i]);
		else printf("%.2f ",female[i]);

	getchar();getchar();
	return 1;
}
 
