void main()
{
 struct people
 {
  char id[30];
  int  age;
 }x[100],y[100],z;
 int a,b,c,e,i,j=0,k=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
 scanf("%s %d",x[k].id,&x[k].age);
 if(x[k].age>=60)
 {
  y[j].age=x[k].age;
 strcpy(y[j].id,x[k].id);
 j=j+1;
 k=k-1;
 }
 k=k+1;
}
for(i=0;i<j;i++)
for(k=0;k<j-i-1;k++)
 if(y[k].age<y[k+1].age)
 {z=y[k+1];
 y[k+1]=y[k];
 y[k]=z;
}
for(i=0;i<j;i++)
printf("%s\n",y[i].id);
for(i=0;i<n-j;i++)
printf("%s\n",x[i].id);
}