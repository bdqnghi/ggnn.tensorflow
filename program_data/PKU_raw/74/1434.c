int main()
{
	int m,n,i,j,num=0,c;
	int a[10000]={0},b[10000]={0},q[10000],z[10000],v[10000];
	scanf("%d%d",&m,&n);
	for(i=m,c=0;i<=n;i++){
		num=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				num=1;
			}
		}
		if(num==0){
			a[c]=i;
			z[c]=i;
			v[c]=i;
			c++;
			
		}
	}
	//printf("%d",c);
	int temp=0,d,e=0,word;
	for(i=0;i<c;i++){
		temp=0;
		do{
			a[i]=a[i]/10;
            temp++;
		}
		
		while(a[i]!=0);
		do{
		b[i]=(z[i]%10)*pow(10,temp-1)+b[i];
			z[i]=z[i]/10;
			temp=temp-1;
		}while(z[i]!=0);
	}//printf("%d\n%d\n",temp,b[0]);
	for(i=0,e=0;i<c;i++){
		if(v[i]==b[i]){
			q[e]=v[i];
			e++;
		}
	}
	//printf("%d",e);
	if(e==0){
		printf("no");
	}
	else{
	printf("%d",q[0]);
	for(i=1;i<e;i++){
		printf(",%d",q[i]);
	}
	}
	return 0;
}


	


