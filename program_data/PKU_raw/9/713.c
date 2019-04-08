struct patient
    {char num[20];
    int age; };
           
int main()
{struct patient a[100],b[100],c[100],temp;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s %d",a[i].num,&a[i].age);}

int j=0,k=0,m;
for (i=0;i<n;i++)
{if (a[i].age>=60) {b[j]=a[i];j++;}
else {c[k]=a[i];k++;}
}

for (i=0;i<j;i++)
{for (m=0;m<j-i;m++)
 
{if (b[m].age<b[m+1].age)
{temp=b[m];b[m]=b[m+1];b[m+1]=temp;}}}

for (i=0;i<j;i++)
{printf("%s\n",b[i].num);}
for(i=0;i<k;i++)
{printf("%s\n",c[i].num);}



       }
