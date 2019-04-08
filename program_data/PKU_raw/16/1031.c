//*5-1
int MyInverseitoa(int iNum, char*ch,  int radix)
{
	int iBits=0;
   //?iNum?????10????????????????? 
	do 
	{
		ch[iBits++]=iNum%radix;  //
		iNum/=radix;
	} while (iNum);
	ch[iBits]='\0';
	return iBits-1;
}

int Myatoi(char*ch, int iBits)
{
	int iNumInverse=0;
	int i=0;
//100->001
	while (ch[i]=='\0')
	{
		i++;
		printf("0");
	}
	for (i=0; i<=iBits; i++)
	{
		iNumInverse=10*iNumInverse+ch[i];
	}
	return iNumInverse;
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
		iNumInverse = Myatoi(ch, iBits);
		printf("%d", iNumInverse);
	}

	return 0;
}