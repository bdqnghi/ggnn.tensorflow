int main()
{
	int age[num];
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&age[i]);
		}
	
	double a=0,b=0,c=0,d=0;
	for(i=0;i<n;i++){
		if(age[i]>=1&&age[i]<=18) a++;
	else if(age[i]>=19&age[i]<=35) b++;
    else if(age[i]>=36&age[i]<=60) c++;
	else d++;
	}
   		printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",a/n*100,b/n*100,c/n*100,d/n*100);
	return 0;
}

		

		