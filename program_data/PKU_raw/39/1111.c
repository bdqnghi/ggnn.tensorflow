int main()
{
	int n,i;
	int p[100]={0};
	int sum=0;
	struct{
		char name[20];
		int exscore;
		int clscore;
		char ganbu;
		char west;
		int lunwen;
	}st[100];

    int max=p[0],k;

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
        scanf("%s %d %d %c %c %d",st[i].name,&st[i].exscore,&st[i].clscore,&st[i].ganbu,&st[i].west,&st[i].lunwen);
        if(st[i].exscore>80 && st[i].lunwen>=1) p[i]+=8000;
		if(st[i].exscore>85 && st[i].clscore>80) p[i]+=4000;
		if(st[i].exscore>90 )  p[i]+=2000;
        if(st[i].exscore>85 && st[i].west=='Y')  p[i]+=1000;
        if(st[i].clscore>80 && st[i].ganbu=='Y')  p[i]+=850;
		sum+=p[i];

		if(p[i]>max)  
	   {
		   max=p[i];
		   k=i;
	   }

	}
	
    
	printf("%s\n",st[k].name);
	printf("%d\n",max);
    printf("%d\n",sum);
    return 0;
}

