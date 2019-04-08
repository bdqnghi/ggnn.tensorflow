int main()
{
	int n,a[1000][1000],i,k,x=0,x1,y1,x2,y2;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(k=0;k<n;k++){
		scanf("%d",&a[i][k]);
}
}
for(i=0;i<n;i++){
	for(k=0;k<n;k++){
		if((a[i][k]==0)&&(a[i][k-1]==255)&&(a[i-1][k-1]==255)&&(a[i-1][k]==255)){
		x1=i;
		y1=k;
		}
	}
}
for(i=0;i<n;i++){
	for(k=0;k<n;k++){
		if((a[i][k]==0)&&(a[i][k+1]==255)&&(a[i+1][k+1]==255)&&(a[i+1][k]==255)){
		x2=i;
		y2=k;
		}
	}
}
printf("%d",(x2-x1-1)*(y2-y1-1));
return 0;
}