struct person
{
	char id[20];
	int age;
};
void main()
{
	int n,i,j,m=0,k=0,z;
	struct person t,*s,*o,*age;
	scanf("%d",&n);
	s=(struct person *)malloc(n*sizeof(struct person));
	o=(struct person *)malloc(n*sizeof(struct person));
	age=(struct person *)malloc(n*sizeof(struct person));
	for(i=0;i<n;i++)
	{scanf("%s %d",(*(s+i)).id,&(*(s+i)).age);
		if ((*(s+i)).age>=60)  {*(o+k)=*(s+i);k++;}
		else {*(age+m)=*(s+i);m++;}
	}
    for(i=0;i<k;i++)
	{for(j=k-1;j>i;j--)
			if ((*(o+j)).age>(*(o+j-1)).age) {t=*(o+j);*(o+j)=*(o+j-1);*(o+j-1)=t;}
     printf("%s\n",(*(o+i)).id);
    }
    for(i=0;i<m;i++)
      printf("%s\n",(*(age+i)).id);
}