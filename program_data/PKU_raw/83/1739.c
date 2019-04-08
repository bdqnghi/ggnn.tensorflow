
int main()
{
int n, i, u[100], a, b=0,g[100];
float  sum=0;
scanf("%d", &n);
for(i=0;i<n;i++){
	scanf("%d",&u[i]);
	b=b+u[i];
}
for(i=0;i<n;i++){
	scanf("%d",&g[i]);
	if(g[i]<=100&&g[i]>=90){
		sum=u[i]*4.0+sum;
	}
	else 	if(g[i]<=84&&g[i]>=82){
		sum=u[i]*3.3+sum;
	}
	else   if(g[i]<=89&&g[i]>=85){
		sum=u[i]*3.7+sum;
	}
else 	if(g[i]<=81&&g[i]>=78){
		sum=u[i]*3.0+sum;
	}
else 	if(g[i]<=77&&g[i]>=75){
		sum=u[i]*2.7+sum;
	}
else 	if(g[i]<=74&&g[i]>=72){
		sum=u[i]*2.3+sum;
	}
else 	if(g[i]<=71&&g[i]>=68){
		sum=u[i]*2.0+sum;
	}
else 	if(g[i]<=67&&g[i]>=64){
		sum=u[i]*1.5+sum;
	}
else 	if(g[i]<=63&&g[i]>=60){
		sum=u[i]*1.0+sum;
	}
else 	if(g[i]<=59&&g[i]>=0){
		sum=u[i]*0.0+sum;
	}
}

printf("%.2f", sum/b);
			return 0;
	}
