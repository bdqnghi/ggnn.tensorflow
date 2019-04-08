

void main()
{int n,*tian,*lord;
	int i,j,x[500]={0},t,sumnum=0,sum;
	int ta,tb,la,lb;

	scanf("%d",&n);
	while(n!=0)
	{
	tian=(int *)malloc(n*sizeof(int));
	lord=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++) scanf("%d",tian+i);
	for(i=0;i<n;i++) scanf("%d",lord+i);
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(*(tian+i)<*(tian+i+1))
			{
				t=*(tian+i);
				*(tian+i)=*(tian+i+1);
				*(tian+i+1)=t;
			}

	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(*(lord+i)<*(lord+i+1))
			{
				t=*(lord+i);
				*(lord+i)=*(lord+i+1);
				*(lord+i+1)=t;
			}
			ta=0,la=0,tb=n-1,lb=n-1;sum=0;
			while(ta!=tb)
			{
				if(*(tian+tb)<*(lord+lb)) {tb--;la++;sum--;}
				else if(*(tian+tb)>*(lord+lb)) {tb--;lb--;sum++;}
				else if(*(tian+ta)<*(lord+la)) {tb--;la++;sum--;}
				else if(*(tian+ta)>*(lord+la)) {ta++;la++;sum++;}
				else if(*(tian+tb)<*(lord+la)) {tb--;la++;sum--;}
				else if(*(tian+tb)>*(lord+la)) {tb--;la++;sum++;}
				else {tb--;la++;}
			}
			if(*(tian+ta)>*(lord+la)) sum++;
			else if(*(tian+ta)<*(lord+la))sum--;

	x[sumnum]=sum;
	sumnum++;
	scanf("%d",&n);
	}

	for(i=0;i<sumnum;i++)
	printf("%d\n",x[i]*200);
}