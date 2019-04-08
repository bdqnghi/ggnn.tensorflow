int main()
{
    int n,s,t,i=2;
	scanf("%d",&n);
	s=n;
	if(n==1)
		printf("End");
	else {
	while(i!=1){
		if(s%2==0){
			t=s/2;
			printf("%d/2=%d\n",s,t);
            s=t;
		}
        else{
            t=s*3+1;
			printf("%d*3+1=%d\n",s,t);
			s=t;
		}
		i=s;
	}
	printf("End\n");
	}
	return 0;
}

