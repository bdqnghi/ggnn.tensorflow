main()
{int m,n,array[5][5];
int *p;
for(p=array[0];p<array[0]+25;p++)
  scanf("%d",p);
scanf("%d%d",&m,&n);
if(m<0||m>4||n<0||n>4){printf("error");return 0;}
int i,t;
for(i=0;i<5;i++)
	{t=array[m][i];array[m][i]=array[n][i];array[n][i]=t;
	}

for(p=array[0];p<array[0]+25;p++)
	{
	 if((p+1-array[0])%5==0)printf("%d\n",*p);
	 else printf("%d ",*p);
	}
}
