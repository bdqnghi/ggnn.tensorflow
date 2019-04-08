int main()
{int w,f,z,i;
int a[13]={0,0,31,28,31,30,31,30,31,31,30,31,30};
scanf("%d",&w);
i=1;f=12;
while(i<=12)
{f=f+a[i];
f=f%7;
if(f+w==7) z=7;
else z=(f+w)%7;
if( z==5) printf("%d\n",i);
i++;
}
 

 
 return 0;
}