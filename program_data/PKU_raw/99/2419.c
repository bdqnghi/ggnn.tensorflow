

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	double a=0,b=0,c=0,d=0;
	int age;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&age);
		if(age>=1&&age<=18)
		{
			a++;
		}
		else if(age>=19&&age<=35)
		{
			b++;
		}
		else if(age>=36&&age<=60)
		{
			c++;
		}
		else if(age>=60)
		{
			d++;
		}
	}
	
	printf("1-18: %.2lf%%\n",(a/n)*100);
printf("19-35: %.2lf%%\n",(b/n)*100);
printf("36-60: %.2lf%%\n",(c/n)*100);
printf("60??: %.2lf%%\n",(d/n)*100);




	return 0;
}