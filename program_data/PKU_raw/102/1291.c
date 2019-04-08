int cmpdouble(const void *x, const void *y)  
{  
    return (*(double*)x > *(double*)y ? 1 : -1);  
}    
main()
{
int n,i,j,k;
double boy[41],girl[41];
scanf("%d",&n);
struct student
{char gender[10];
double height;
}student[41];
for(i=0;i<=n-1;i++)
scanf("%s %lf",&student[i].gender,&student[i].height);
i=0;
j=0;
k=0;
while(i<=n-1)
{
	if(student[i].gender[0]=='m')
	{boy[j]=student[i].height;
	j++;}
	else
	{girl[k]=student[i].height;
	k++;}
	i++;
}

qsort(boy,j,sizeof(boy[0]),cmpdouble);
qsort(girl,k,sizeof(girl[0]),cmpdouble);
for(i=0;i<=j-1;i++)
printf("%.2f ",boy[i]);
for(i=k-1;i>0;i--)
printf("%.2f ",girl[i]);
printf("%.2f",girl[0]);
}
 