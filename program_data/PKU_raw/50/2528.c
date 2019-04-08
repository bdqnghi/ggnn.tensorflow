int main()
{
	int w,i,b,c;
	int a[13];
	scanf("%d",&w);
	a[1]=0;
	a[2]=31;
	a[3]=28;
	a[4]=31;
	a[5]=30;
	a[6]=31;
	a[7]=30;
	a[8]=31;
	a[9]=31;
	a[10]=30;
	a[11]=31;
	a[12]=30;
    for(i=1;i<=12;i++)
    {w=w+a[i];
     c=w%7;
     if(c==0)
     {printf("%d\n",i);} 
    }
return 0;
} 