int main()
	{
int n,i,j,e,c=0,a[10],b[10],d[10];

double s[100],t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d%d%d",&a[i],&b[i],&d[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
	s[c]=sqrt(1.0*(a[i]-a[j])*(a[i]-a[j])+1.0*(b[i]-b[j])*(b[i]-b[j])+1.0*(d[i]-d[j])*(d[i]-d[j]));
	c++;
	}
}
for(e=1;e<=n*(n-1)/2;e++){
	for(c=0;c<n*(n-1)/2-e;c++){
		if(s[c]<s[c+1]){
		t=s[c+1];
		s[c+1]=s[c];
		s[c]=t;
		}
	}
}
for(c=0;c<n*(n-1)/2;c++){
	if(s[c]==s[c+1])
		continue;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(s[c]==sqrt(1.0*(a[i]-a[j])*(a[i]-a[j])+1.0*(b[i]-b[j])*(b[i]-b[j])+1.0*(d[i]-d[j])*(d[i]-d[j]))){
			printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i],b[i],d[i],a[j],b[j],d[j],s[c]);
		}
		}
	}
}

return 0;
}
