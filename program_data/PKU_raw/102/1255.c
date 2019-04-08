
int cmp(const void *p1,const void *p2)
{
	if(*(float*)p1<*(float*)p2) return -1;
	else if(*(float*)p1>*(float*)p2) return 1;
	else return 0;
}

void photo(float *a,float *b,int n)
{
	int x=0,y=0,i;
	char s[7];
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		getchar();
		if(s[4]=='\0')
		{
			scanf("%f",a+x);
			x++;
		}
		else
		{
			scanf("%f",b+y);
			y++;
		}
		getchar();
	}
	qsort(a,x,sizeof(float),cmp);
	qsort(b,y,sizeof(float),cmp);
	for(i=0;i<x;i++) printf("%.2f ",a[i]);
	for(i=y-1;i>0;i--) printf("%.2f ",b[i]);
	printf("%.2f",b[0]);
}

main()
{
	float a[40],b[40];
	int n;
	scanf("%d\n",&n);
	photo(a,b,n);
}