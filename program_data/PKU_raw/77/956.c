int main()
{
	char children[100];
	gets(children);
	int boys[50],i,top=0;
	boys[0] = 0;
	for(i=1; children[i]; i++)
		if(children[i] == children[0])
			boys[++top] = i;
		else
			printf("%d %d\n", boys[top--], i);
	return 0;
}