int compare(const void *a,const void *b)
{
	if(*(float*)a>*(float*)b)return 1;
	if(*(float*)a<*(float*)b)return -1;
	if(*(float*)a==*(float*)b)return 0;
}
int main()
{
	int N,i,v,t,j;
	float r;
	scanf("%d",&N);
	struct kids
	{
		char s[10];
		float h;
	}kid[40];
	char c;
	for(i=0;i<=N-1;i++)
	{
		scanf("%s ",kid[i].s);
		scanf("%f",&kid[i].h);
	}
	float hm[40],fm[40];
	for(i=0,t=0,v=0;i<=N-1;i++)
	{
		if(strcmp(kid[i].s,"male")==0)
		{
			hm[t]=kid[i].h;
			t=t+1;
		}
		if(strcmp(kid[i].s,"female")==0)
		{
			fm[v]=kid[i].h;
			v=v+1;
		}
        
	}
	//int *p=(float*)malloc(N*sizeof(float));
	
	//qsort(hm,t,sizeof(hm[0]),compare);
	for(i=1;i<=t-1;i++)
	{
		for(j=0;j<=t-i-1;j++)
		{
			if(hm[j]>=hm[j+1])
			{
				r=hm[j];
				hm[j]=hm[j+1];
				hm[j+1]=r;
			}
		}
	}
	for(i=1;i<=v-1;i++)
	{
		for(j=0;j<=v-i-1;j++)
		{
			if(fm[j]<=fm[j+1])
			{
				r=fm[j];
				fm[j]=fm[j+1];
				fm[j+1]=r;
			}
		}
	}
	printf("%.2f",hm[0]);
	for(i=1;i<=t-1;i++)
	{
		printf(" %.2f",hm[i]);
	}
	//qsort(fm,v,sizeof(fm[0]),compare);
	//printf("%.2f",fm[0]);
	for(i=0;i<=v-1;i++)
	{
		printf(" %.2f",fm[i]);
	}
    
    
    
    
}
