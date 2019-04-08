int main()
{
int n,a[10],b[10],c[10],num1,num2,m[50],l[50];
double d[50],temp,distance;
int i,j,k=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d %d",&a[i],&b[i],&c[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
	{
     distance=sqrt(pow((a[i]-a[j]),2)+pow((b[i]-b[j]),2)+pow((c[i]-c[j]),2));
     d[k]=distance;
     m[k]=i;
     l[k]=j;
     k++;
	}

}
for(i=1;i<=n*(n-1)/2;i++){
    for(j=0;j<n*(n-1)/2-i;j++){
        if(d[j]<d[j+1])
		{
         temp=d[j];
         d[j]=d[j+1];
         d[j+1]=temp;
         num1=m[j];
         m[j]=m[j+1];
         m[j+1]=num1;
         num2=l[j];
         l[j]=l[j+1];
         l[j+1]=num2;
		}
	}
}
for(i=0;i<n*(n-1)/2;i++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[m[i]],b[m[i]],c[m[i]],a[l[i]],b[l[i]],c[l[i]],d[i]);
}
return 0;
}


