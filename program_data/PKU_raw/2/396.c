
struct book{
	int co;
	char A[26];
};

int main(){
	int m,i,k,max;
	int count[26];
	int *cc;
	scanf("%d",&m);
	struct book *bk=(struct book*)malloc(sizeof(struct book)*m);/*??????*/
	struct book *p;
	p=bk;
	for(i=0;i<m;i++,p++){
		scanf("%d %s",&(p->co),p->A);
	}
	cc=count;/*?? */
	memset(count,0,sizeof(count));/*????*/
	for(i=0;i<26;i++,cc++){
		p=bk;
		for (k=0;k<m;k++,p++)
		{
			if (strchr(p->A,'A'+i))
			{
				(*cc)++;
			}
		}/*??*/
	}
	max=0;
	for (i=0;i<26;i++)
	{
		if (count[i]>count[max])
		{
			max=i;
		}
	}
	printf("%c\n%d\n",'A'+max,count[max]);
	p=bk;
	for (i=0;i<m;i++,p++)
	{
		if (strchr(p->A,'A'+max))
		{
			printf("%d\n",p->co);
		}
	}
	free(bk);
	return 0;
}