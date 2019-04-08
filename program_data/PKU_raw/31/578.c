void main()
{
    struct fy
	{
		char xh[100];
		char xm[100];
		char xb;
		int nl;
		float df;
		char dz[100];
		struct fy *pre;
	};
	struct fy *p,*node;
	int n=1;
	for(;;)
	{
	node= (struct fy *)malloc(sizeof(struct fy));
	if(n==1) node->pre=NULL;
	else node->pre=p;
	scanf("%s",node->xh);
	if(strcmp(node->xh,"end")==0) break;
	scanf("%s %c %d %f %s",node->xm,&node->xb,&node->nl,&node->df,node->dz);
	p=node;
	n++;
	}
	for(;node->pre!=NULL;)
	{
		node=node->pre;
		printf("%s %s %c %d %g %s\n",node->xh,node->xm,node->xb,node->nl,node->df,node->dz);
	}

   
}
