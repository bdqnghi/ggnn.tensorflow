int f(int k)
{int p=1,y=0,j,i,q;
	if(k<0)
p=-1;
	k=fabs(k);
int a[5];
for(i=4;i>=0;i--)
{a[i]=k/pow(10,i);
k=k-a[i]*pow(10,i);
}

for(i=4;i>=0;i--)
if(a[i]!=0)
break;
for(j=0;j<5;j++)
if(a[j]!=0)
break;
for(q=j;q<=i;q++)
{y=a[q]*pow(10,i-q)+y;
}
y=y*p;
return(y);
}
void main()
{int i;
int a[6];
for(i=0;i<6;i++)
scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",f(a[i]));
}