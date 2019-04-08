int main(){
	
	double	n,age,a=0,b=0,c=0,d=0;
    scanf("%lf",&n);
	for(double i=0;i<n;i++)
	{
		scanf("%lf",&age);
			if(age<19)
				a++;
			else if((age>18)&&(age<36))
				b++;
            else if((age>35)&&(age<61))
				c++;
			else if(age>59)
				d++;
	}
     printf("1-18: %.2lf%%\n",100*a/n);
printf("19-35: %.2lf%%\n",100*b/n);
printf("36-60: %.2lf%%\n",100*c/n);
printf("60??: %.2lf%%\n",100*d/n);
//scanf("%lf",&age);
	return 0;
}
		