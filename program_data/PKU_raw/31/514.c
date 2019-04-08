struct info{
	char num[10];
	char name[20];
	char sex;
	int age;
	float grade;
	char address[10];
	struct info *link;
};
int main(){
	struct info *p1,*p2;
	p1=p2=NULL;
	p1=(struct info *)malloc(sizeof(struct info));
	scanf("%s",p1->num);
	if(p1->num[0]=='e') return 0;
	do{
		scanf("%s %c%d%f%s",p1->name,&p1->sex,&p1->age,&p1->grade,p1->address);
		p1->link=p2;
		p2=p1;
		p1=(struct info *)malloc(sizeof(struct info));
		scanf("%s",p1->num);
	}while(p1->num[0]!='e');
	while(p2!=NULL){
		printf("%s %s %c %d %g %s\n",p2->num,p2->name,p2->sex,p2->age,p2->grade,p2->address);
		p1=p2->link;
		p2=p1;
	}
	return 0;
}