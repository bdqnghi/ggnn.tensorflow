
struct student{
	char name[20];
	int smark;
	int cmark;
	char lead;
	char west;
	int num;
};

struct student stu[200];
int s[100];
int n;

int js(int x)
{
	int reval=0;
	if (stu[x].smark>80&&stu[x].num>=1) reval+=8000;
	if (stu[x].smark>85&&stu[x].cmark>80) reval+=4000;
	if (stu[x].smark>90) reval+=2000;
	if (stu[x].smark>85&&stu[x].west=='Y') reval+=1000;
	if (stu[x].cmark>80&&stu[x].lead=='Y') reval+=850;
return reval;
}

int main()
{
	int maxnum=0,max=0,sum=0,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].smark>>stu[i].cmark>>stu[i].lead>>stu[i].west>>stu[i].num;
	}
	for(i=0;i<n;i++)
	{
//		cout<<js(i)<<endl;
		sum+=js(i);
		if(js(i)>max){
			maxnum=i;
			max=js(i);
		}
	}
	cout<<stu[maxnum].name<<endl<<max<<endl<<sum<<endl;
	return 0;
}
