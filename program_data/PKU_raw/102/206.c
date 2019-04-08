
float male[50];
int nm=0;
float fema[50];
int nf=0;

int mcmp(const void *a, const void *b)
{
	float x = *(float*)a;
	float y = *(float*)b;
	if(x>y) return 1;
	if(x==y) return 0;
	if(x<y) return -1;
}

int fcmp(const void *a, const void *b)
{
	return -mcmp(a,b);
}

void main()
{
	char buf[100];
	char *p;
	int n;
	int i;
	float a;

	fgets(buf, sizeof(buf), stdin);
	n=atoi(buf);
	for(;n>0;n--)
	{
		fgets(buf, sizeof(buf), stdin);
		p=strtok(buf, " ");
		a = atof(strtok(NULL, " "));
		if(strcmp(p,"male")==0)
			male[nm++]=a;
		else
			fema[nf++]=a;
	}

	qsort(male, nm, sizeof(float), mcmp);
	qsort(fema, nf, sizeof(float), fcmp);

	for(i=0;i<nm;i++)
		printf("%.2f ", male[i]);
	for(i=0;i<nf-1;i++)
		printf("%.2f ", fema[i]);
	printf("%.2f", fema[i]);

}