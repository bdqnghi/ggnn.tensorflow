struct mao
    {
	char name[10];
	int age;
    }pat[100];
int main()
{
    int max (int age[100],int n);
	int n,i,k;
int age[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",pat[i].name,&pat[i].age);
		if(pat[i].age>=60)
        age[i]=200+pat[i].age;
        else
        age[i]=101-i;
	}
	for(i=0;i<n;i++)
	{
                    k=max (age,n);
                    printf("%s\n",pat[k].name);
    }
    return 0;
}
int max (int age[100],int n)
{
	int a=0,j=0,k=0;
	for(j=0;j<n;j++)
	{
		if(age[j]>a)
		{
			a=age[j];
			k = j;
		}
	}
	age[k]=0;
	return k;
}