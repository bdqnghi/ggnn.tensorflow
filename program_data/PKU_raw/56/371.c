
int main(int argc, char* argv[])
{
	int k=0,i,t;
	char num[6],rum[6];
	scanf("%s",num);
	for (i=0;num[i]!='\0';i++)
	{
      k=k+1;	
	}
    for (i=0;num[i]!='\0';i++)
	{
		t=k-i-1;
		rum[t]=num[i];
	}
	rum[k]='\0';

	
	
		printf("%s\n",rum);

	return 0;
}