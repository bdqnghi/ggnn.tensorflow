void main()
{
	struct student
	{
		char num[10],name[20],sex,add[15];
		int age;
		float mark;
		struct student * next;
		struct student * before;
	};
	struct student *s1=(struct student *)malloc(sizeof(struct student)),*head=s1,*s2;
	(*s1).before=0;
	while(1)
	{
		scanf("%s",(*s1).num);
		if((*s1).num[0]!='e')
		{
			scanf("%s %c %d %f %s",(*s1).name,&((*s1).sex),&((*s1).age),&((*s1).mark),(*s1).add);
			s2=(*s1).next=(struct student *)malloc(sizeof(struct student));
			(*s2).before=s1;
			s1=s2;
		}
		else
		{
			head=(*s1).before;
			break;
		}
	}
	s1=head;
	while(1)
	{
		printf("%s %s %c %d %g %s\n",(*s1).num,(*s1).name,(*s1).sex,(*s1).age,(*s1).mark,(*s1).add);
		if((*s1).before)s1=(*s1).before;
		else break;
	}
}