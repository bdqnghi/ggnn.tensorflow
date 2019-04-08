void main()
{
int i=0,j=0,pieces[10],result[10];
float value,flag[10],mianzhi[10]={100,50,20,10,5,1};
scanf("%f",&value);
while(value>=mianzhi[i],i<10)
{
pieces[i]=value/mianzhi[i];
value=value-pieces[i]*mianzhi[i];
i++;
}
for(i=0;i<10;i++)
{
if(pieces[i]>=0) 
{
result[j]=pieces[i];
flag[j]=mianzhi[i];
j++;
}
}
for(i=0;i<j;i++)
{
printf("%d\n",result[i]);
}
}

