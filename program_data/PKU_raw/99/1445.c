
int main(int argc, char* argv[])
{
    int n,i,age;
	int a=0,b=0,c=0,d=0;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
	    if(age<=18)
			a++;
		else if(age>=19&&age<=35)
			b++;
		else if(age>=36&&age<=60)
			c++;
		else if(age>=61)
			d++;
	}
	printf("1-18: %.2lf%%\n",(double)a/(double)n*100.00);
	printf("19-35: %.2lf%%\n",(double)b/(double)n*100.00);
	printf("36-60: %.2lf%%\n",(double)c/(double)n*100.00);
	printf("60??: %.2lf%%\n",(double)d/(double)n*100.00);
	return 0;
}
