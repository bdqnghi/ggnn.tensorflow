int main(int argc, char* argv[])
{
	int n,y[100],i;
		double a=0,b=0,c=0,d=0;
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%d",&y[i]);
	     if(y[i]<=18)
			 a++;
		 if((y[i]>=19)&&(y[i]<=35))
			 b++;
		 if((y[i]>=36)&&(y[i]<=60))
			 c++;
		 if(y[i]>60)
			 d++;
    }
    	printf("1-18: %.2f%%\n",100.0*a/n);
		printf("19-35: %.2f%%\n",100.0*b/n);
		printf("36-60: %.2f%%\n",100.0*c/n);
		printf("60??: %.2f%%\n",100.0*d/n);
		return 0;
}
