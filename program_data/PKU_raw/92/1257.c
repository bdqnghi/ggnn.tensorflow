

void main()
{int n,*tian,*lord;
	int i,j,m=0,x[500]={0},t,sumnum=0,sum;
	int ta,tb,la,lb;

	scanf("%d",&n);
	while(n!=0)
	{
	tian=(int *)malloc(n*sizeof(int));
	lord=(int *)malloc(n*sizeof(int));
	//sum=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++) scanf("%d",tian+i);
	for(i=0;i<n;i++) scanf("%d",lord+i);

	//maopao1;maopao2;
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(*(tian+i)<*(tian+i+1))
			{m++;
				t=*(tian+i);
				*(tian+i)=*(tian+i+1);
				*(tian+i+1)=t;
			}

	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
			if(*(lord+i)<*(lord+i+1))
			{m++;
				t=*(lord+i);
				*(lord+i)=*(lord+i+1);
				*(lord+i+1)=t;
			}

/*	for(i=0;i<n;i++)//i???
	{
			*(sum+i)=0;
			for(j=0;j<n;j++)
			{m++;
			if(*(tian+j)>*(lord+(i+j)%n)) (*(sum+i))++;
			else if(*(tian+j)<*(lord+(i+j)%n)) (*(sum+i))--;
			}printf("*(sum+%d)=%d\n",i,*(sum+i));	
			if(i!=0&&*(sum+i)<*(sum+i-1)) {m=i-1;break;}
			else if(i==n-1) m=n-1;
	}*/
			//ta,tb,la,lb:tian's tail,lord's head/tail
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
	//maxsum
	//x[sumnum]=*sum;
	x[sumnum]=sum;
	//for(i=0;i<n;i++)
	//	x[sumnum]=(x[sumnum]>*(sum+i))?x[sumnum]:*(sum+i);
	sumnum++;
	scanf("%d",&n);
	}
	for(i=0;i<sumnum;i++)
	printf("%d\n",x[i]*200);
	//printf("%d",m);
}
