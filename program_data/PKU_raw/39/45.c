
int main ()
{
	int N,i,m,s1,s2,max=0,sum=0,t;
	char name[20],maxname[20],t1,t2;
	scanf ("%d",&N);
	for(i=0;i<N;i++)
	{
		t=0;
		scanf("%s %d %d %c %c %d",name,&s1,&s2,&t1,&t2,&m);
		if(s1>80 && m>=1)
			t+=8000;
		if(s1>85 && s2>80)
			t+=4000;
		if(s1>90)
			t+=2000;
		if(s1>85 && t2=='Y')
			t+=1000;
		if(s2>80 && t1=='Y')
			t+=850;
		sum+=t;
		if(t>max)
		{
			strcpy(maxname,name);
			max=t;
		}
	}
	printf("%s\n%d\n%d\n",maxname,max,sum);
	return 0 ;
}
