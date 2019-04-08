int main()
{
	int a,i=0;
    scanf("%d",&a);
if(a==100)
printf("001");
else
{
	while(a>0)
	{
		i=i*10+a%10;
		//printf("%d",i);
		a=a/10;
	}
     printf("%d",i);}
	return(0);		
}