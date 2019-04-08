int main()
{
    int n,i,j,S,t,q,te,qe,m;
    for(;;){
	S=0;
	scanf("%d",&n);
	if(n==0) return 0;
	int *T=(int *)malloc(sizeof(int)*n);
    int *Q=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++) scanf("%d", T+i);
	for(i=0;i<n;i++) scanf("%d", Q+i);

	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("\n");*/

    for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(T+j)>*(T+i)){
			    m=*(T+i);
				*(T+i)=*(T+j);
				*(T+j)=m;
			} 
		}
	}
    for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(Q+j)>*(Q+i)){
			    m=*(Q+i);
				*(Q+i)=*(Q+j);
				*(Q+j)=m;
			} 
		}
	}

	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("\n");*/

    for(t=0,q=0,te=n-1,qe=n-1;;){
		if(t==te){
			if(*(T+t)>*(Q+q)){
		    S+=200;
			*(T+t)=-1;
			*(Q+q)=-1;
			t++;
			q++;
			break;
			}
			else if(*(T+t)<*(Q+q)){
		    S-=200;
			*(T+te)=-1;
			*(Q+q)=-1;
			q++;
			te--;
			break;
			}
			else if(*(T+t)==*(Q+q)) break;
			}
		else{
		if(*(T+t)>*(Q+q)){
		    S+=200;
			*(T+t)=-1;
			*(Q+q)=-1;
			t++;
			q++;

	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("%d\n",S);
	printf("\n");*/

		}
		else if(*(T+t)<*(Q+q)){
		    S-=200;
			*(T+te)=-1;
			*(Q+q)=-1;
			q++;
			te--;

	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("%d\n",S);
	printf("\n");*/
		}
		else if(*(T+t)==*(Q+q)){
			if(*(T+te)>*(Q+qe)){
			    S+=200;
				*(T+te)=-1;
				*(Q+qe)=-1;
				te--;
				qe--;

	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("%d\n",S);
	printf("\n");*/

			}
			else if(*(T+te)<=*(Q+qe)){
                if(*(T+te)!=*(T+t)) S-=200;
				*(T+te)=-1;
				*(Q+q)=-1;
				q++;
				te--;
    
	/*for(i=0;i<n;i++) printf("%3d ", *(T+i));
	printf("\n");
	for(i=0;i<n;i++) printf("%3d ", *(Q+i));
	printf("\n");
	printf("%d\n",S);
	printf("\n");*/

			}
		}		
		}
	}
	printf("%d\n",S);
}
	return 0;
}