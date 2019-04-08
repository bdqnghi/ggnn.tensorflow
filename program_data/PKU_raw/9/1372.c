
struct patient
{
	char id[10];
	int old;
} pt[100];

main()
{
	int n,i,j,k,e,h;
	int yx[100],byx[100];
	scanf("%d",&n);

	j=0;
	k=0;
	for(i=0;i<n;i++){
		scanf("%s %d",&pt[i].id,&pt[i].old);
		if(pt[i].old>=60){
			yx[j]=i;
			j++;
		}
		else{
			byx[k]=i;
			k++;
		}

	}

	for(i=0;i<j;i++){
		for(h=0;h<j-1;h++){
			if(pt[yx[h]].old<pt[yx[h+1]].old){
				e=yx[h];
				yx[h]=yx[h+1];
				yx[h+1]=e;
			}
		}
	}

	for(i=0;i<j;i++){
		printf("%s\n",pt[yx[i]].id);
	}
	for(i=0;i<k;i++){
		printf("%s\n",pt[byx[i]].id);
	}
}
