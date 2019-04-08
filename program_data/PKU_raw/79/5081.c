int main()
{
int i,j,m,n,k,t,N,a[300]; 
while(1){ 
	k=0;
   scanf("%d%d",&N,&n);
   for(i=0;i<N;i++)
		a[i]=i+1;
	
	
    if(N==0&&n==0)
		break;
	
	for(j=0,m=1;;j++,m++){
	   if(j==N) 
		j=0;
	   while(a[j]==0) {
		j++;
        if(j==N) 
		j=0;
	   }
	   if(m==n) {
		a[j]=0;
		m=0;
		k++;
	   }
	   if(k==N-1) 
		break;
	}
	
	for(t=0;t<N;t++){
       if(a[t]!=0) 
	   printf("%d\n",a[t]);
	} 

}
	return 0;
}