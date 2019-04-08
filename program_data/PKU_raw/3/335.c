int a[1000];
int main ()
{
	int n,k;
	int i,j;
	int m;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((a[i]+a[j])==k){ 
				m=k;
			    break;
			}
			else if((a[i]+a[j])!=k) { 
			continue;
			}
	}
	}
	if(m==k)  printf("yes");
	else if(m!=k) printf("no");
	return 0;
}
