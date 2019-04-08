
int main(int argc, char* argv[])
{
	int n,m,i,j,max=0,min=100;
	char str[201][255];
	int a[201];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		getchar();
		a[i]=strlen(str[i]);
        if(a[i]>max)  max=a[i];
		if(a[i]<min)   min=a[i];
	}
	//printf("%d %d",max,min);
    for(i=0;i<n;i++)
	{
		if(a[i]==max)  {
		 puts(str[i]);
	  printf("\n");
	  break;
		}
	}
	for(i=0;i<n;i++)
	{
	 if(a[i]==min)  
	 {
		puts(str[i]);
	 printf("\n");
	 break;
	 }
	}
	return 0;
}

