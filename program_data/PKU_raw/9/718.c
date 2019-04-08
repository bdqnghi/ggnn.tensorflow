void main()
{
int n,i,j=0,t=0;

struct patient
{
char str[10];
int age;
}pat[100],pat2[100],patt;


scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s %d",&pat[i].str,&pat[i].age);

for(i=0;i<n;i++)
if (pat[i].age>=60) {pat2[j]=pat[i];j++;t++;}


for(i=0;i<t-1;i++)
	{
		for(j=0;j<t-1-i;j++)
		{if (pat2[j+1].age>pat2[j].age)
			{
			patt=pat2[j];
			pat2[j]=pat2[j+1];
			pat2[j+1]=patt;
			}
		}
	}


for(i=0;i<t;i++)
printf("%s\n",pat2[i].str);

for(i=0;i<n;i++)
{
if (pat[i].age<60)
	printf("%s\n",pat[i].str);
}

}