double score(int a){
	double result;
	if(a>=90){
		result=4.0;
	}
	else if(a>=85&&a<=89){
		result=3.7;
	}
	else if(a>=82&&a<=84){
		result=3.3;
	}
	else if(a>=78&&a<=81){
		result=3.0;
	}
	else if(a>=75&&a<=77){
		result=2.7;
	}
	else if(a>=72&&a<=74){
		result=2.3;
	}
	else if(a>=68&&a<=71){
		result=2.0;
	}
	else if(a>=64&&a<=67){
		result=1.5;
	}
	else if(a>=60&&a<=63){
		result=1.0;
	}
	else {
		result=0;
	}
	return result;
}
int main()
{
	int n,i;
	int sz1[50],sz2[50];
	double sz3[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz1[i]);
	}
	for(i=0;i<n;i++)
	{
         scanf("%d",&sz2[i]);
	}
double x,a=0;
int y=0;
	for(i=0;i<n;i++)
	{   
		x=score(sz2[i]);
			sz3[i]=x*sz1[i];
	}
	for(i=0;i<n;i++)
	{
		a+=sz3[i];
		y+=sz1[i];
	}
	
	printf("%.2lf\n",a/y);
	return 0;
}