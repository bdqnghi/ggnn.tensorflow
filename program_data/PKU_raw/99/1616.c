int main ()
{
	int n,i;
	int sz[100];
	int a=0,b=0,c=0,d=0;
	
	scanf("%d",&n);


	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]<=18){
			a++;
		}
        if(sz[i]>=19&&sz[i]<=35){
			b++;
		}
        if(sz[i]>=36&&sz[i]<=60){
			c++;
		}

        if(sz[i]>=61){
			d++;
		}
	}
double a1,b1,c1,d1;
          a1=(double)100*a/(a+b+c+d);
		  b1=(double)100*b/(a+b+c+d);
          c1=(double)100*c/(a+b+c+d);
          d1=(double)100*d/(a+b+c+d);




			
printf("1-18: %.2lf%%\n",a1);
printf("19-35: %.2lf%%\n",b1);
printf("36-60: %.2lf%%\n",c1);
printf("60??: %.2lf%%\n",d1);
return 0;

}