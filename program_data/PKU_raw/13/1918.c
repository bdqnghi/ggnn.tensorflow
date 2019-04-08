int main()
{int n,a[20001],i,j,k,flag=0;
	scanf("%d",&n);
	if(n>=1&&n<=20000){
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]<10||a[i]>=100)
scanf("%d",&a[i]);
else continue;}
printf("%d",a[0]);
for(j=1;j<n;j++){
	for(k=0;k<j;k++){
		if(a[j]==a[k])
		{flag=1;
			break;}
		
	}
if(flag==0)
printf(" %d",a[j]);
flag=0;
}
}
return 0;
}
