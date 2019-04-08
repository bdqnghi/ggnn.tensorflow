//#include<stdlib.h>
//#include<math.h>
int main()
{
	int n,m,i,j;
	int a[301];
	while(true){
		scanf("%d %d",&n,&m);
		if(n==0)
			break;
		for(i=1;i<n;i++)
			a[i]=i;
		a[0]=n;
		j=1;
		while(n>1){
			j=(m+j-1)%n;
			
			
			for(i=j;i<n-1;i++)
				a[i]=a[i+1];
			n--;
		}
		printf("%d\n",a[0]);
	}
	return 0;
}
