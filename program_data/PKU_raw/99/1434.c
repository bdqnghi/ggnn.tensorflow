int main()
{
	int n,i;
	int a[100]={0};
	int s=0,q=0,z=0,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
		{
			s+=1;
		}
		else if(a[i]>18&&a[i]<=35)	
		{
			q+=1;
		}
		else if(a[i]>35&&a[i]<=60)	
		{
			z+=1;
		}
		else if(a[i]>60)	
		{
			l+=1;
		}
	}
	printf("1-18: %.2lf%\n",100.0*s/n);
	printf("19-35: %.2lf%\n",100.0*q/n);
	printf("36-60: %.2lf%\n",100.0*z/n);
	printf("60??: %.2lf%\n",100.0*l/n);
	return 0;
}