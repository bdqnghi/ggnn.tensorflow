struct index
{
	int num;
	char wr[26];
};
int main()
{
	int n,a[26],*pr,max;
	char s[26],*sp,*pt,temp;
	for(pr=a;pr<a+26;pr++)
	{
		*pr=0;
	}
	sp=s;
	*sp=65;
	for(sp=s+1;sp<s+26;sp++)
	{
		*sp=*(sp-1)+1;
	}
	struct index *p;
	scanf("%d",&n);
	struct index *ind=(struct index*)malloc(sizeof(struct index)*n);
	for(p=ind;p<ind+n;p++)
	{
		scanf("%d %s",&p->num,p->wr);
	}
	for(p=ind;p<ind+n;p++)
	{
		for(pt=(*p).wr;pt<(*p).wr+26;pt++)
		{
			for(pr=a,sp=s;sp<s+26;sp++,pr++)
			{
				if(*pt==*sp)
				{
					(*pr)++;
				}
			}
		}
	}
	max=*a;
	temp=65;
	for(pr=a,sp=s;pr<a+26;pr++,sp++)
	{
		if(*pr>max)
		{
			max=*pr;
			temp=*sp;
		}
	}
	for(pr=a,sp=s;sp<s+26;sp++,pr++)
	{
		if(*pr==max)
		{
			printf("%c\n%d\n",*sp,*pr);
		}
	}
	for(p=ind;p<ind+n;p++)
	{
		for(pt=(*p).wr;pt<(*p).wr+26;pt++)
		{
			if(*pt==temp)
			{
				printf("%d\n",(*p).num);
			}
		}
	}
	free(ind);
	return 0;
}