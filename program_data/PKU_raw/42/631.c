void main()
{
int n,i,j,t=0;
long int k,a[100000]={0}, *point1,*point2;

scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
scanf("%ld",&k);

point1=a;
for(i=0;(i<n)&(t<=n);i++,point1++)
{
	if (*point1==k) 
		{point2=point1;
			for(j=i;j<n-1;j++,point2++)
				{*point2=*(point2+1);}
		*point2=k;
		point1--;
		i--;
		t++;
		}
}

point1=a;
if (*point1!=k) printf("%ld",*point1);
point1++;

for(i=0;i<n-1;i++,point1++)
if (*point1!=k) printf(" %ld",*point1);
}