
struct patients
{
	int num;
	char ID[10];
	int age;
};

int main()
{
	int n,i,j,y,o;
    struct patients list[100],young[100],old[100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		list[i].num=i;
		scanf("%s %d",list[i].ID,&list[i].age);
	}

	y=0;
	o=0;

	for(i=0;i<n;i++)
	{
		if(list[i].age>=60){
			old[o]=list[i];
			o++;
		}else{
			young[y]=list[i];
			y++;
		}
	}

	for(i=1;i<o;i++)
	{
		for(j=0;j<o-i;j++)
		{
			if(old[j].age<old[j+1].age){
				struct patients check;
				check=old[j];
				old[j]=old[j+1];
				old[j+1]=check;
			}
		}
	}

	for(i=0;i<o;i++)
	{
		printf("%s\n",old[i].ID);
	}
	for(i=0;i<y;i++)
	{
		printf("%s\n",young[i].ID);
	}

	return 0;
}







