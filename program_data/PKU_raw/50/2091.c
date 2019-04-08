int main()
{
	int m,n,i,w,k=12,a[13];
	scanf("%d",&w);
	a[1]=31;a[3]=31;a[5]=31;a[7]=31;a[8]=31;a[10]=31;a[12]=31;
	a[4]=30;a[6]=30;a[9]=30;a[11]=30;
	a[2]=28;
	a[0]=0;
	for(i=1;i<13;i++)
	{
		k+=a[i-1];
	
	if(w<6&&w>0&&k%7==5-w)printf("%d\n",i);
	else if(w<8&&w>5&&k%7==12-w)printf("%d\n",i);
	}



	return 0;
}