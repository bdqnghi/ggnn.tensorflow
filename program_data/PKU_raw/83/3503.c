int main()
{
	int n,z[10];
	float s[10],u[10],a=0.0,b,c=0.0;
	float GPA;
    int i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&(z[i]));
		c=c+z[i];
		i++;
	}
	
	i=0;
    while(i<n){
		scanf("%f",&(s[i]));
		i++;
	}
	i=0;
	while(i<n){
		if(s[i]>=90&&s[i]<=100){
			b=4.0;
		}
		if(s[i]>=85&&s[i]<=89){
			b=3.7;
		}
	    if(s[i]>=82&&s[i]<=84){
			b=3.3;
		}
     	if(s[i]>=78&&s[i]<=81){
			b=3.0;
		}
    	if(s[i]>=75&&s[i]<=77){
			b=2.7;
		}
	    if(s[i]>=72&&s[i]<=74){
			b=2.3;
		}
	    if(s[i]>=68&&s[i]<=71){
			b=2.0;
		}
	    if(s[i]>=64&&s[i]<=67){
			b=1.5;
		}
    	if(s[i]>=60&&s[i]<=63){
			b=1.0;
		}
	    if(s[i]<60){
			b=0.0;
		}
	    u[i]=b*z[i];
	    a=a+u[i];
	    i++;
	}
	GPA=a/c;
	printf("%.2f",GPA);
	//scanf("%d",&n);
	return 0;
}