int main()
{
    int n,a,i,max1=-10000,max2=-10000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
        if (a>max1){
			max2=max1;
			max1=a; }  
		else if(a<max1&&a>max2)
		    max2=a;
		else if(a<max2)
			;
	}
	printf("%d\n%d",max1,max2);
	return 0;
}