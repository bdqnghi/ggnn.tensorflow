struct library
{
	int num;
	char aut[30];
	struct library *next;
}
main()
{
	int m,i,j,a[30],t,b[30],x=0;
	char name;
	struct library *head;
	struct library *p1,*p2,*p;
	for(i=0;i<26;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	scanf("%d",&m);
	p1=p2=(struct library*) malloc(LEN);
	scanf("%d %s",&p1->num,p1->aut);
	head=p1;
	p2=p1;
	for(i=0;i<m-1;i++)
	{
		p1=(struct library*) malloc(LEN);
		scanf("%d %s",&p1->num,p1->aut);
		p2->next=p1;
		p2=p1;
	}
	p1->next=NULL;
	p=head;
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(p->aut[j]=='A') a[0]=a[0]+1;
			if(p->aut[j]=='B') a[1]=a[1]+1;
			if(p->aut[j]=='C') a[2]=a[2]+1;
			if(p->aut[j]=='D') a[3]=a[3]+1;
			if(p->aut[j]=='E') a[4]=a[4]+1;
			if(p->aut[j]=='F') a[5]=a[5]+1;
			if(p->aut[j]=='G') a[6]=a[6]+1;
			if(p->aut[j]=='H') a[7]=a[7]+1;
			if(p->aut[j]=='I') a[8]=a[8]+1;
			if(p->aut[j]=='J') a[9]=a[9]+1;
			if(p->aut[j]=='K') a[10]=a[10]+1;
			if(p->aut[j]=='L') a[11]=a[11]+1;
			if(p->aut[j]=='M') a[12]=a[12]+1;
			if(p->aut[j]=='N') a[13]=a[13]+1;
			if(p->aut[j]=='O') a[14]=a[14]+1;
			if(p->aut[j]=='P') a[15]=a[15]+1;
			if(p->aut[j]=='Q') a[16]=a[16]+1;
			if(p->aut[j]=='R') a[17]=a[17]+1;
			if(p->aut[j]=='S') a[18]=a[18]+1;
			if(p->aut[j]=='T') a[19]=a[19]+1;
			if(p->aut[j]=='U') a[20]=a[20]+1;
			if(p->aut[j]=='V') a[21]=a[21]+1;
			if(p->aut[j]=='W') a[22]=a[22]+1;
			if(p->aut[j]=='X') a[23]=a[23]+1;
			if(p->aut[j]=='Y') a[24]=a[24]+1;
			if(p->aut[j]=='Z') a[25]=a[25]+1;
			if(p->aut[j]=='\0') break;
		}
		p=p->next;
	}
	t=0;
	for(i=1;i<26;i++)
	{
		if(a[t]<a[i]) t=i;
	}
	if(t==0)
	{
		printf("A\n");
		name='A';
	}
	if(t==1)
	{
		printf("B\n");
		name='B';
	}
	if(t==2)
	{
		printf("C\n");
		name='C';
	}
	if(t==3)
	{
		printf("D\n");
		name='D';
	}
	if(t==4)
	{
		printf("E\n");
		name='E';
	}
	if(t==5)
	{
		printf("F\n");
		name='F';
	}
	if(t==6)
	{
		printf("G\n");
		name='G';
	}
	if(t==7)
	{
		printf("H\n");
		name='H';
	}
	if(t==8)
	{
		printf("I\n");
		name='I';
	}
	if(t==9)
	{
		printf("J\n");
		name='J';
	}
	if(t==10)
	{
		printf("K\n");
		name='K';
	}
	if(t==11)
	{
		printf("L\n");
		name='L';
	}
	if(t==12)
	{
		printf("M\n");
		name='M';
	}
	if(t==13)
	{
		printf("N\n");
		name='N';
	}
	if(t==14)
	{
		printf("O\n");
		name='O';
	}
	if(t==15)
	{
		printf("P\n");
		name='P';
	}
	if(t==16)
	{
		printf("Q\n");
		name='Q';
	}
	if(t==17)
	{
		printf("R\n");
		name='R';
	}
	if(t==18)
	{
		printf("S\n");
		name='S';
	}
	if(t==19)
	{
		printf("T\n");
		name='T';
	}
	if(t==20)
	{
		printf("U\n");
		name='U';
	}
	if(t==21)
	{
		printf("V\n");
		name='V';
	}
	if(t==22)
	{
		printf("W\n");
		name='W';
	}
	if(t==23)
	{
		printf("X\n");
		name='X';
	}
	if(t==24)
	{
		printf("Y\n");
		name='Y';
	}
	if(t==25)
	{
		printf("Z\n");
		name='Z';
	}
	printf("%d\n",a[t]);
	p=head;
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(p->aut[j]==name)
			{
				b[x]=p->num;
				x=x+1;
				break;
			}
		}
		p=p->next;
	}
	for(i=0;i<x-1;i++) printf("%d\n",b[i]);
	printf("%d",b[i]);
}
