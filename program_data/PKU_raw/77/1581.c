/*??(15.2)????*/ 



char boy;

int queue(int num)//????num???????num?????girl??? 
{
	char input;
	input=getchar();
	if(input==boy)
	{
		int girl;
		girl=queue(num+1);
		printf("%d %d\n",num,girl);
		return queue(girl+1);
	}
	else return num;
}

int main()
{
	boy=getchar();
	printf("0 %d\n",queue(1)); 
	return 0;
}