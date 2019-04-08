int main(){
	int n, a[100],i,m;
	double x=0,y=0,z=0,w=0,p,q,r,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (a[i]<=18){x++;}
		else if (a[i]>18&&a[i]<=35){y++;}
		else if (a[i]>35&&a[i]<=60){z++;}
		else if(a[i]>60){w++;}
	}
		p=100*x/n;
		q=100*y/n;
		r=100*z/n;
		s=100*w/n;
		printf("1-18: %.2lf",p);
		printf("%\n");

printf("19-35: %.2lf",q);
		printf("%\n");
printf("36-60: %.2lf",r);
	printf("%\n");
printf("60??: %.2lf",s);
		printf("%\n");


	return 0;
}