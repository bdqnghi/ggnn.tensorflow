int main()
{
char p;
int max,submax=-1,i,a;
scanf("%d",&a);
max=a;
scanf("%c",&p);
while(p==',')
{
scanf("%d",&a);
if(max<a)
{
submax=max;
max=a;
}
else if(submax<a&&a!=max)
{
submax=a;
}scanf("%c",&p);

}
if(submax==-1)
{
printf("No");
}
else
{
printf("%d",submax);
}
return 0;
}
