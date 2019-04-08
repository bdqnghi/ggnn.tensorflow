struct chil
{
	int sex;
	int num;
}child[100];
struct student
{
	int b;
	int g;
}girl[100];
void bubble(struct student a[],int len)
{
	int i, j;
	struct student temp;
	for(j=1; j<len; j++)
	{
		for(i=0; i<len-j; i++)
		{
			if(a[i].g>a[i+1].g)
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
void main()
{
	int i, j, k, n;
	char s[101];
	gets(s);
	n=strlen(s);
	child[0].sex=1; child[0].num=0;
	for(i=1; i<n; i++)
	{
		if(s[i]==s[0])
		{
			child[i].sex=1; child[i].num=i;
		}
		else
		{
			child[i].sex=0; child[i].num=i;
		}
	}//??????
	for(i=0, j=0; i<n; i++)
	{
		if(child[i].sex==1 && child[i+1].sex==0)
		{
			girl[j].b=child[i].num;
			girl[j].g=child[i+1].num;
			j++;
			for(k=i; (k+2)<n; k++)
				child[k]=child[k+2];
			n=n-2;
			i=-1;
		}
	}
	bubble(girl,j);
	for(i=0; i<j; i++)
		printf("%d %d\n",girl[i].b,girl[i].g);
}