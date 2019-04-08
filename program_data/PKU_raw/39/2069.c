int main()
{
	int n,i,total=0,max=0,maxi=0;
	struct list{
		char name[20];
		int score;
		int rate;
		char leader;
		char west;
		int pap;
		int schol;
	};
	struct list *start,*p1;
	scanf("%d",&n);
	getchar();
	start=(struct list*)calloc(n,sizeof(struct list));
	p1=start;
	for(i=0;i<n;i++){
		scanf("%s", &(p1->name) );
		scanf("%d %d %c %c %d", &(p1->score), &(p1->rate), &(p1->leader), &(p1->west), &(p1->pap));
		getchar();
		p1 -> schol=0;
		if( p1->score > 80 && p1->pap > 0 )
			p1->schol += 8000;
		if( p1->score > 85 && p1->rate > 80 )
			p1->schol += 4000;
		if( p1->score > 90 )
			p1->schol += 2000;
		if( p1->score > 85 && p1->west == 'Y' )
			p1->schol += 1000;
		if( p1->rate > 80 &&  p1->leader == 'Y' )
			p1->schol += 850;
		total += p1->schol;
		if( p1->schol > max ){
				max=p1->schol;
				maxi=i;
			}
		p1++;
	}
	printf("%s\n%d\n%d\n", (start+maxi) -> name, (start+maxi) -> schol, total);
	return 0;
}