int main()
{
	int num[100]={0},index=0,sum=0;
	char c;
for(;num[0]!=-1;)
{while(true)
	{
		scanf("%d",&num[index++]);
		scanf("%c",&c);
		if(c=='\n')	
			break;
	}
for(int i=0;i<index;i++)
{
	for(int j=0;j<index;j++)
	{
		if(num[i]==(2*num[j])||(2*num[i])==num[j])
		{
			sum++;		
		}
	}
}
if(num[0]==-1)
{return 0;}
else 
printf("%d\n",(sum-1)/2);
sum=0;index=0;
}
return 0;
}