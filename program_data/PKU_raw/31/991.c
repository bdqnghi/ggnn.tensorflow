//???
int main()
{
   struct student
   {
      char id[200];
	  char name[200];
	  char sex;
	  int age;
	  double score;
	  char add[200];
   }stu[1000];
   int i=0;
   while(cin>>stu[i].id)
   {
	   if(strcmp(stu[i].id,"end")==0)
		   break;
	   else 
		   cin>>stu[i].name>>stu[i].sex>>stu[i].age>>stu[i].score>>stu[i].add;
	   i++;
   }
   int j=i;
   for(j=i-1;j>=0;j--)
   {
	   cout<<stu[j].id<<' '<<stu[j].name<<' '<<stu[j].sex<<' '<<stu[j].age<<' '<<stu[j].score<<' '<<stu[j].add<<endl; 
   }
   return 0;
}