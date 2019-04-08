int main(){
int n,k=0,e=0,i,j;
char o[41][5];
double m[41],g[41],t[41],f[41],a,b;
scanf("%d",&n);
for (i=0;i<n;i++)
{
	scanf("%s %lf",o[i],&g[i]);
}
for(i=0;i<n;i++)
{
	if(o[i][0]=='m')
	{
		t[k]=g[i];
		k++;
	}
	else 
	{
		f[e]=g[i];
		e++;
	}
}
for(i=k;i>0;i--)
{
	for(j=0;j<i-1;j++)
	{
		if(t[j+1]<t[j])
		{a=t[j+1];
		t[j+1]=t[j];
		t[j]=a;
		}
	}
}
for(i=e;i>0;i--)
{
	for(j=0;j<i-1;j++)
	{
		if(f[j+1]<f[j])
		{a=f[j+1];
		f[j+1]=f[j];
		f[j]=a;
		}
	}
}
for(i=0;i<k;i++)
{
	printf("%.2lf ",t[i]);
}
for(i=e-1;i>0;i--)
{
	printf("%.2lf ",f[i]);
}
	printf("%.2lf",f[0]);
	return 0;
}
