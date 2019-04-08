int Compare1(const void*elem1,const void*elem2)
{
    int*p1,*p2;
    p1=(int*)elem1;
     p2=(int*)elem2;
    return(*p1)-(*p2);
}
int Compare2(const void*elem1,const void*elem2)
{
    int*p1,*p2;
    p1=(int*)elem1;
     p2=(int*)elem2;
    return(*p2)-(*p1);
}
main()
{
int n;
scanf("%d",&n);
int i,p,q;
p=q=0;
float m[n],f[n];
for(i=0;i<n;i++)
{
char sex[7];
scanf("%s",sex);
if(sex[0]=='m')
{
scanf("%f",&m[p]);
p++;
}
if(sex[0]=='f')
{
scanf("%f",&f[q]);
q++;
}
}
qsort(m,p,sizeof(float),Compare1);
for(i=0;i<p;i++)
printf("%.2f ",m[i]);
qsort(f,q,sizeof(float),Compare2);
for(i=0;i<q;i++)
{
    if(i==q-1)
printf("%.2f",f[i]);
else
printf("%.2f ",f[i]);
}
}
