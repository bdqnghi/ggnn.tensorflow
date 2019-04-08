void main()
{
	int reverse(int num);
	int a[6],b[6],i;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		b[i]=reverse(a[i]);
		printf("%d\n",b[i]);
	}
}

int reverse(int num)
{
	int n;
	int i,j,k,l,m;
	if(fabs(num)>=10000){
		i=num/10000;
		j=(num-10000*i)/1000;
		k=(num-10000*i-1000*j)/100;
		l=(num-10000*i-1000*j-100*k)/10;
		m=num%10;
		n=10000*m+1000*l+100*k+10*j+i;
	}
	else if(fabs(num)>=1000){
		i=num/1000;
		j=(num-1000*i)/100;
		k=(num-1000*i-100*j)/10;
		l=num%10;
		n=1000*l+100*k+10*j+i;
	}
	else if(fabs(num)>=100){
		i=num/100;
	    j=num/10-i*10;
	    k=num%10;
	    n=100*k+10*j+i;
	}
	else if(fabs(num)>=10){
		i=num/10;
		j=num%10;
		n=10*j+i;
	}
	else
		n=num;
	
	return(n);
}

	
