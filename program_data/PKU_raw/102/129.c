
int compare1(const void *elem1,const void *elem2)
{
 float *p1,*p2;
 p1=(float *)elem1;
 p2=(float *)elem2;
 if(*p1>*p2)
	 return 1;
 else
	 return 0;
}

int compare2(const void *elem1,const void *elem2)
{
 float *p1,*p2;
 p1=(float *)elem1;
 p2=(float *)elem2;
 if(*p2>*p1)
	 return 1;
 else
	 return 0;
}

int main()
{
    int i,n,k1=0,k2=0;
	char c[7];
	float MH[40],FH[40];

	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",c);
		if(strcmp(c,"male")==0)
			scanf("%f",&MH[k1++]);
		else if(strcmp(c,"female")==0)
			scanf("%f",&FH[k2++]);
	}
    qsort(MH,k1,sizeof(float),compare1);
	qsort(FH,k2,sizeof(float),compare2);
	for(i=0;i<k1;i++)
		printf("%.2f ",MH[i]);
	for(i=0;i<k2-1;i++)
		printf("%.2f ",FH[i]);
	printf("%.2f\n",FH[k2-1]);
	return 0;
}