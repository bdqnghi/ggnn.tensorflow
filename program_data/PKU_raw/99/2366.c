int main()
{
	int a[100],i;
	double n,b=0,c=0,d=0,e=0;
    double b1,c1,d1,e1;
	char m='%';
	scanf("%lf",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=1&&a[i]<=18){
			b++;
		}if(a[i]>=19&&a[i]<=35){
			c++;
		}if(a[i]>=36&&a[i]<=60){
			d++;
		}if(a[i]>60){
			e++;
		}
	}
		b1=(b/n)*100;
     	c1=(c/n)*100;
	   d1=(d/n)*100;
   e1=(e/n)*100;
   printf("1-18: %.2lf%c\n",b1,m);

 printf("19-35: %.2lf%c\n",c1,m);
 printf("36-60: %.2lf%c\n",d1,m);
 printf("60??: %.2lf%c\n",e1,m);
 return 0;
}