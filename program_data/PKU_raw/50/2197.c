
int main()
{int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k,n,di;
scanf("%d",&n);
di=12;
for(i=0;i<12;i++)
{di=di+m[i];
j=(di+n)%7;
if(j==5)printf("%d\n",i+1);

	}



getchar();
getchar();
getchar();
}
