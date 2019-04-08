int main()
{
	int n;
	int a[10],b[10];
	double c[10],s1=0.0,s2=0.0,av;
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		s1=s1+b[i];
	}
  

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=90&&a[i]<=100){
			c[i]=4.0;
		}else if(a[i]>=85&&a[i]<=89){
			c[i]=3.7;
		}else if(a[i]>=82&&a[i]<=84){
			c[i]=3.3;
		}else if(a[i]>=78&&a[i]<=81){
			c[i]=3.0;
		}else if(a[i]>=75&&a[i]<=77){
			c[i]=2.7;
		}else if(a[i]>=72&&a[i]<=74){
			c[i]=2.3;
		}else if(a[i]>=68&&a[i]<=71){
			c[i]=2.0;
		}else if(a[i]>=64&&a[i]<=67){
			c[i]=1.5;
		}else if(a[i]>=60&&a[i]<=63){
			c[i]=1.0;
		}else if(a[i]<60){
			c[i]=0.0;
		}
		c[i]=c[i]*b[i];
		s2=s2+c[i];
	}

    av=s2/s1;
	printf("%.2lf\n",av);
    return 0;
}
