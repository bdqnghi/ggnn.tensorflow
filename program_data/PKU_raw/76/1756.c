int main()
{
	int n,i,k,t,e,m,j;
		scanf("%d",&n);
		int a[10001],b[10001];
			double s[10001],max,min;
for(i=0;i<n;i++)
scanf("%d%d",&(a[i]),&(b[i]));
for(k=1;k<=n-1;k++){
	for(i=0;i<n-k;i++){
		if(b[i]>b[i+1]){
	e=b[i];
	b[i]=b[i+1];
	b[i+1]=e;
		}
	}
}
for(k=1;k<=n-1;k++){
	for(i=0;i<n-k;i++){
		if(a[i]>a[i+1]){
		t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
		}
	}
}
min=a[0];
max=b[n-1];
s[0]=min;
for(j=0;j<2*(max-min);j++)
	s[j+1]=s[j]+0.5;
for(j=0;j<2*(max-min);j++){
	for(i=0;i<n;i++){
		if(s[j]<=b[i]&&s[j]>=a[i]){
			m=1;
	   break;
		}
		else
		   m=0;
		}
	if(m==0){
		  printf("no");
		break;
	}
	}

 if(m==1)
printf("%d %d",a[0],b[n-1]);
return 0;
}

