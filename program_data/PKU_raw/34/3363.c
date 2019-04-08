
int proc(int i)
{
	int ans;
	if(i%2==1)
	{
		ans=i*3+1;
		printf("%d*3+1=",i);
	}
	else {
		ans=i/2;
		printf("%d/2=",i);
	}
	return ans;
}



int main () {
    int n;
	scanf("%d",&n);
	while (n>1) {
		n=proc(n);
		printf("%d\n",n);
	}
	printf("End");
    return 0;
}
