int cmp(const void* a,const void * b)
{   float x=*(float*)a;
    float y=*(float*)b;
	if(x>y)
	 return 1;
	 else return -1;
	}
	
int main()
{
	int n;
	scanf("%d",&n);
  float s1[50];
  float s2[50];
	    int m=0,f=0;
	for(int i=0;i<n;i++)
	{   	char sex[10];
	    float h;
		cin>>sex>>h;
		if(strcmp(sex,"male")==0)
		{s1[m]=h;
		 m++;}
		if(strcmp(sex,"female")==0)
		{s2[f]=h;f++;}
		
		
		
		}
	qsort(s1,m,sizeof(s1[0]),&cmp);
	qsort(s2,f,sizeof(s2[0]),&cmp);
	for(int i=0;i<m;i++)
	printf("%.2f ",s1[i]);
	for(int i=f-1;i>0;i--)
		printf("%.2f ",s2[i]);
	printf("%.2f",s2[0]);
	}
