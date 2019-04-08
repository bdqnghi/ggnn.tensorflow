int main()
{int n,i,j;
double a[1000],b[1000],t,l=0;
scanf ("%d\n",&n);
for(i=0;i<n;i++){scanf("%lf %lf",&a[i],&b[i]);
}
for(i=0;i<n;i++){for(j=i+1;j<n;j++)
{t=sqrt(pow(a[i]-a[j],2)+pow(b[i]-b[j],2));
if(l<t){l=t;}}
}
	printf("%.4lf\n",l);
	return 0;
}
