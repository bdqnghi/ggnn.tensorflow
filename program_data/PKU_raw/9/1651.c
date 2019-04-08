int n;
struct patients
{
	char name[11];
	int age;
}pat[100];
struct patold
{
	char name[11];
	int age;
}old[100];
struct patyoung
{
	char name[11];
	int age;
}young[100];
int y=0,o=0;
char nametemp[11];
int agetemp;

int main()
{
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&pat[i].name);
		scanf("%d",&pat[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
		{
			strcpy(old[o].name,pat[i].name);
			old[o].age=pat[i].age;
			o++;
		}
		else
		{
			strcpy(young[y].name,pat[i].name);
			young[y].age=pat[i].age;
			y++;
		}
	}
	for(i=1;i<o;i++)
	{
		for(j=0;j<o-i;j++)
		{
			if(old[j].age<old[j+1].age)
			{
				agetemp=old[j].age;
				old[j].age=old[j+1].age;
				old[j+1].age=agetemp;
				strcpy(nametemp,old[j].name);
				strcpy(old[j].name,old[j+1].name);
				strcpy(old[j+1].name,nametemp);
			}
		}
	}
	for(i=0;i<o;i++)
		printf("%s\n",old[i].name);
	for(i=0;i<y;i++)
		printf("%s\n",young[i].name);
	return 0;
}