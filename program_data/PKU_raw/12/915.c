
void main()
{
	int a[16],n,i,j,sum=0;

	a[0]=1;
	while(1){
		for(i=1;a[i-1]!=0;i++){
			scanf("%d",&a[i]);
			if(a[1]==-1) goto end;
		}
		n=i-1;
		for(i=1;i<n;i++){
			for(j=1;j<n;j++){
			if(i==j) continue;
			if(a[i]==2*a[j]) sum++;
			}
		}
		printf("%d\n",sum);
		for(i=1;i<16;i++)
		a[i]=0;
		sum=0;
	}
end:;
}