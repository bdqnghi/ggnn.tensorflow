int main()
{
	int number1,number2,i,j,x[300],y[300],n[300]={0},m=1,z[300]={0},p=0,q;
	char d[300];
    i=0;
	do{scanf("%d%c",&x[i],&d[i]);
	   i=i+1;}
	while(d[i-1]==',');
	y[0]=x[0];
	number1=i;
	for(i=1;i<=number1-1;i++)
		{for(j=0;j<=i-1;j++)
			if(x[i]==x[j])
				n[i]=1;
	     if(n[i]==0) {y[m]=x[i];
		           m=m+1;}
	    }
	number2=m;
	for(i=0;i<=number2-1;i++)
		for(j=0;j<=number2-1;j++)
			if(y[j]>y[i])
				z[i]=z[i]+1;
	for(i=0;i<=number2-1;i++)
		if(z[i]==1){p=1;
	                q=y[i];
					break;}
	if(p==1) printf("%d",q);
	else printf("No");

	return 0;
	
}