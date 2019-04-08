int main()
{
	struct patient{
		char ID[10];int a;
	}p[100],pr;
	int np,i,k;
	scanf("%d",&np);
	for(i=0;i<np;i++){
		scanf("%s %d",p[i].ID,&p[i].a);
	}
	for(i=0;i<np;i++){
		for(k=np-1;k>i;k--){
			if(p[k].a>p[k-1].a&&p[k].a>=60){
				pr=p[k];p[k]=p[k-1];p[k-1]=pr;
			}
		}
		printf("%s\n",p[i].ID);
	}
	return 0;
}