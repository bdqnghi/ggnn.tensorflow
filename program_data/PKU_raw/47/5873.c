
int main(int argc, char* argv[])
{
	int a[100],b[100],i,n;
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
        
			b[i]=a[n-1-i];
                      if(i<n-1)
			printf("%d ",b[i]);
                      else if (i=n-1)
                            printf("%d",b[i]);}
	return 0;
}

