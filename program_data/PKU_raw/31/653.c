int main()
{
	struct student {
		char ID[30];
		char name[30];
		char sex;
		int age;
		float  score;
		char address[20];
	}message[1000];
	int num=0;

	for(;;num++)
	{
		cin>>message[num].ID;
		if (message[num].ID[0]!='e')//??????
		{cin>>message[num].name>>message[num].sex>>message[num].age>>message[num].score>>message[num].address;
		}
		else break;
	}
	for(int i=num-1;i>=0;i--)
		cout<<message[i].ID<<' '<<message[i].name<<' '<<message[i].sex<<' '<<message[i].age<<' '<<message[i].score<<' '<<message[i].address<<endl;
return 0;
}
