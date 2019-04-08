int main ()
{
	int n, a[100], i, count1=0,count2=0,count3=0,count4=0;
	double b1,b2,b3,b4;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<=18)
			count1+=1;
		else if(a[i]>=19&&a[i]<=35)
			count2+=1;
		else if(a[i]>=36&&a[i]<=60)
			count3+=1;
		else count4+=1;
	}
	b1=count1*100.00/n;
	b2=count2*100.00/n;
	b3=count3*100.00/n;
	b4=count4*100.00/n;
	printf("1-18: %.2f%\n19-35: %.2f%\n36-60: %.2f%\n60??: %.2f%",b1,b2,b3,b4);
	return 0;
}
