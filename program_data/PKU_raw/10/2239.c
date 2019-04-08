int main()
{
	int i,N;
	int b[30]={0},a[30]={0};
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	 scanf("%d",&a[i]);
    b[1]=1;
    for(i=2;i<=N;i++)
	 {  int m=0;
	    for(int j=1;j<i;j++)
	     { if(a[j]>=a[i])
	         {  if(m<b[j]) m=b[j];
         		
         	 }
    		
     	 }
 		b[i]=m+1;
 	 }
	 int max=0;   
    for(i=1;i<=N;i++)
     {
         if(max<b[i]) max=b[i];         	
     }
	printf("%d\n",max);
} 