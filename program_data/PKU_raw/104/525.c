void main()
{
	int x[11],y[11],i,j,m;
	int *p1,*p2;
	scanf("%d%d",&x[0],&y[0]);
	p1=&x[0];
    p2=&y[0];
	if(*p1==*p2||*p1==1||*p2==1){
		printf("%d",*p1);
	}
	else{
    for(i=0;i<13;i++){
	*(p1+1)=*p1/2;
	p1++;
		if(*p1==1){
			break;
		}
	}
	for(j=0;j<13;j++){
	*(p2+1)=*p2/2;
	p2++;
		if(*p2==1){
			break;
		}
	}
	for(m=0;m<13;m++){
		if(*p2!=*p1)
		{
	printf("%d",*(p2+1));
	break;
		}
		p1=p1-1;
		p2=p2-1;
	}
	}
}