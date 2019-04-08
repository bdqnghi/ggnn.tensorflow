
int main()
{
	int a1=0,a2=0,a3=0,a4=0;
	int i,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m<=18 && m>=1)  a1++;
		else if(m>=19 && m<=35)  a2++;
        else if(m>=36 && m<=60)  a3++;
        else if(m>=61 && m<=100 )  a4++;
	}
	printf("1-18: %.2lf%%\n",(double)a1/n*100);
    printf("19-35: %.2lf%%\n",(double)a2/n*100);
    printf("36-60: %.2lf%%\n",(double)a3/n*100);
    printf("60??: %.2lf%%\n",(double)a4/n*100);
	return 0;
}

