struct Inf
{
	char c[10];
	int a;
};
int main()
{
	int n,o=0,y=0,t,i,j;
	char temp[10];
	struct Inf inf[100],old[100],young[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",inf[i].c,&inf[i].a);
		if(inf[i].a>=60)
		{
			strcpy(old[o].c,inf[i].c);
			old[o].a=inf[i].a;
			o++;
		}
		else
		{
			strcpy(young[y].c,inf[i].c);
			young[y].a=inf[i].a;
			y++;
		}
	}
	for(j=1;j<o;j++)
	{
		for(i=0;i<o-j;i++)
		{
			if(old[i].a<old[i+1].a)
			{
				strcpy(temp,old[i].c);
				strcpy(old[i].c,old[i+1].c);
				strcpy(old[i+1].c,temp);
				t=old[i].a;
				old[i].a=old[i+1].a;
				old[i+1].a=t;
			}
		}
	}
	for(i=0;i<o;i++)
	{
		printf("%s\n",old[i].c);
	}
	for(i=0;i<y;i++)
	{
		printf("%s\n",young[i].c);
	}
	return 0;
}