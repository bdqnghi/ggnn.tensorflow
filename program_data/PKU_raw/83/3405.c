
int main()
{
	int a,i,e;
	float b,c;
	int s[10],g[10],k[10];
	scanf("%d",&a);
	e=0;
	for(i=0;i<a;i++){
	scanf("%d",&(s[i]));
	e+=s[i];
	}
	b=0;
	for(i=0;i<a;i++){
	scanf("%d",&(g[i]));
	if(g[i]<60){
		k[i]=0*s[i];
	}else if(g[i]>=60&&g[i]<=63){
		k[i]=10*s[i];
	}else if(g[i]>=64&&g[i]<=67){
		k[i]=15*s[i];
	}else if(g[i]>=68&&g[i]<=71){
		k[i]=20*s[i];
	}else if(g[i]>=72&&g[i]<=74){
		k[i]=23*s[i];
	}else if(g[i]>=75&&g[i]<=77){
		k[i]=27*s[i];
	}else if(g[i]>=78&&g[i]<=81){
		k[i]=30*s[i];
	}else if(g[i]>=82&&g[i]<=84){
		k[i]=33*s[i];
	}else if(g[i]>=85&&g[i]<=89){
		k[i]=37*s[i];
	}else if(g[i]>=90&&g[i]<=100){
		k[i]=40*s[i];
	}
	b+=k[i];
	}
	c=1.0*b/e/10;
	printf("%.2f",c);
	return 0;
}