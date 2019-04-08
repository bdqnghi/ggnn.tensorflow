int main()
{
int i,n;
int num [100];
scanf("%d",&n);
i=0;
while(i<n){
	scanf("%d",&num [i]);
	i++;
}
i=n-1;
while(i>0){
	printf("%d ",num [i]);
	i--;
}
printf("%d",num [0]);
return 0;
}
