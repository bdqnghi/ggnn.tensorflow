int sushu(int p)
{
	int i;
	if(p==2) return 1;
	else 
	{
		for(i=2;i<p;i++)
		{
			if(p%i==0) return 0;
		}
		if(i==p) return 1;
	}
}
int nixu(int n)
{
	int i,sit=0;
	int data[1000],sum=0;
	for(i=0;n!=0;i++)
	{
		data[i]=n%10;
		n=n/10;
	}
	sit=i;
	for(i=0;i<sit;i++)
	{
		sum+=data[sit-1-i]*pow(10,i);
	}
	return sum;
}
int jiecheng(int n)
{
	int i,sum=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			sum*=i;
		}
		return sum;
	}
}
void main(){
	char a[300];
	int b[200];
	gets(a);
	int l,i,j,c=0;
	l=strlen(a);
	for(i=0;i<200;i++)
	{
		b[i]=0;
	}
	for(i=0;i<l;i++)
	{
		if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123)) 
		{
			b[a[i]]++;
			j=a[i];
			c++;
		}
	}
	if(c==0) printf("No");
	else 
	{
		for(j=65;j<91;j++)
		{
			if(b[j]!=0)
			{
				printf("%c=%d\n",j,b[j]);
			}
		}
		for(j=97;j<123;j++)
		{
			if(b[j]!=0)
			{
				printf("%c=%d\n",j,b[j]);
			}
		}
	}
}
