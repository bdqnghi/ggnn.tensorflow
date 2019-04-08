//*5-1
int MyInverseitoa(int iNum, char*ch,  int radix)
{
	int iBits=0;
   //?iNum?????10????????????????? 
	do 
	{
		ch[iBits]=iNum%radix;  //
		printf("%d",ch[iBits]);
		iNum/=radix;
		iBits++;
	} while (iNum);
	ch[iBits]='\0';
	return iBits-1;
}

int main()
{
	int iNum, iNumInverse, iBits=0;

	char ch[12];  ///int ??10?
	scanf("%d", &iNum);
	if (iNum==0)
	{
		iNumInverse=iNum;
		printf("%d", iNumInverse);
	}
	else
	{
		iBits = MyInverseitoa(iNum, ch,10);  //?????'\0'
		//iNumInverse = Myatoi(ch, iBits);
		//printf("%d", iNumInverse);
	}

	return 0;
}
