struct student
{char name[20];
int score1;
int score2;
char ganbu;
char west;
int paper;
int scolarship;
};

void main()
{
  int n,i,total=0,max=0;
  char name2[20];
  struct student stu[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].ganbu,&stu[i].west,&stu[i].paper);
  stu[i].scolarship=0;
  if(stu[i].score1>80&&stu[i].paper>=1) stu[i].scolarship=8000;
  if(stu[i].score1>85&&stu[i].score2>80) stu[i].scolarship=stu[i].scolarship+4000;
  if(stu[i].score1>90) stu[i].scolarship=stu[i].scolarship+2000;
  if(stu[i].score1>85&&stu[i].west=='Y') stu[i].scolarship=stu[i].scolarship+1000;
  if(stu[i].score2>80&&stu[i].ganbu=='Y') stu[i].scolarship=stu[i].scolarship+850;
  total=total+stu[i].scolarship;
  if(stu[i].scolarship>max) 
  {max=stu[i].scolarship;
  strcpy(name2,stu[i].name);}
  }

  printf("%s\n%d\n%d",name2,max,total);
}

  