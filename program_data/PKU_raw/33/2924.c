int main()
{
	int m,i,j,k=0;
	char q;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<200;j++){
				scanf("%c",&q);
		 switch(q)
			{
			case'A':printf("T");
				break;
			case'T':printf("A");
				break;
			case'C':printf("G");
				break;
			case'G':printf("C");
				break;
	 			default :printf("\n");
				}
		}
	}		
	return 0;
}