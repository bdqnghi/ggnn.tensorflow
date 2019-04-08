
int main()

{
    int n, i,m=0, d;
	float j,j1,j2,q[100],q1[100],q2[100];
	scanf("%d",&n);
	scanf("%f %f",&j1,&j2);
	j=j2/j1;
	for(i=0;i<n-1;i++){
		scanf("%f %f",&q1[i],&q2[i]);
		q[i]=q2[i]/q1[i];
		if(q[i]-j>0.05)
			printf("better\n");
		else if(j-q[i]>0.05)
			printf("worse\n");
		else printf("same\n");
    
	}
   	return 0;
}
