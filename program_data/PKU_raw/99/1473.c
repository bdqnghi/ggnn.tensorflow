
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i,age[100];
	double a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
		if(age[i]<=18)a++;
		if(age[i]>=19&&age[i]<=35)b++;
		if(age[i]>=36&&age[i]<=60)c++;
		if(age[i]>60)d++;
	}
    a=a/n*100;
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
	printf("1-18: %.2lf%%\n",a);
    printf("19-35: %.2lf%%\n",b);
    printf("36-60: %.2lf%%\n",c);
    printf("60??: %.2lf%%\n",d);
	return 0;
}

