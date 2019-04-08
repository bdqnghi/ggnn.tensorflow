int main(int argc, char* argv[])
{
	int n,i,x,number_0=0,s;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{	
		scanf("%d",&x);
		if(x==0){
			number_0++;
                          }

        }
    s=(number_0/4-1)*(number_0/4-1);
	printf("%d\n",s);
	return 0;
}