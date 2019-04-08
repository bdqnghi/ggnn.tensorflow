int main()
{
   
	int n,i,a[100000],k,x,b=0,m=0,c=0,j;
    scanf("%d",&n);
    m=0;
	for(k=3;k<n+1;k++){
		b=0;
		for(i=2;i<k;i++)if(k%i==0)b++;
		if(b==0)
		{
			a[m]=k;
		         m++;
		}
	}

    
	for(j=0;j<m-1;j++) {
if(a[j+1]-a[j]==2){
printf("%d %d\n",a[j],a[j+1]);
c++;
}
}
if (c==0)printf("empty\n");

 

	return 0;
}