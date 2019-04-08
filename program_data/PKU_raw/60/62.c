
int prime(unsigned int x)
{int y;
 for (y=2;y<=sqrt(x);y+=1)
if (x%y==0)break;
if (y>sqrt(x))return 0;
return 1;
}

void main()
{int youmeiyou,i,n;
youmeiyou=0;
scanf("%d",&n);
for (i=5;i<=n;i+=2)
{ 
	if (prime(i-2)==0&&prime(i)==0) {printf("%d %d\n", i-2,i); youmeiyou=1;}
		}	
if (youmeiyou==0)printf("empty\n");
}