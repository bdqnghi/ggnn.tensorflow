int main(){
int m,n,a[100],s[100],i,j;
double b[200],c[200],d[200],sum=0;
scanf("%d",&m);
for(i=0;i<m;i++){
	scanf("%d",&s[i]);
}
b[0]=2;
c[0]=1;
for(i=0;i<m;i++){
	for(j=1;j<s[i];j++){
		b[j]=b[j-1]+c[j-1];
		c[j]=b[j-1];
		d[j]=b[j]/c[j];
		sum+=d[j];
		
	}
printf("%.3f\n",sum+2.0);
sum=0;
}

return 0;
}