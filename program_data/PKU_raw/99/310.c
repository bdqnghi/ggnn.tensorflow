int main(){
	int age[100],n,i,a=0,b=0,c=0,d=0;
	double age18,age35,age60,ageabove;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]>=1&&age[i]<=18)
		{
			a++;
		}
		else if(age[i]>=19&&age[i]<=35)
		{
			b++;
		}
		else if(age[i]>=36&&age[i]<=60)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	age18=(double)a/n*100;
	age35=(double)b/n*100;
	age60=(double)c/n*100;
	ageabove=(double)d/n*100;
	printf("1-18: %.2lf%%\n",age18);
	printf("19-35: %.2lf%%\n",age35);
	printf("36-60: %.2lf%%\n",age60);
	printf("60??: %.2lf%%\n",ageabove);
	return 0;
}
		