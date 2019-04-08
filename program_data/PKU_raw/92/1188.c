void InsertSort(int[],int);
int SaiMa(int[],int[],int);
void main()
{
	int horse_n[100];//??
	int horseTian[100][1000];
	int horseQi[100][1000];
	int horse_i=0;//??(???+1)
	int i;
	scanf("%d",&horse_n[horse_i]);
	do
	{
		for(i=0;i<horse_n[horse_i];i++){
			scanf("%d",&horseTian[horse_i][i]);}
		for(i=0;i<horse_n[horse_i];i++){
			scanf("%d",&horseQi[horse_i][i]);}
		horse_i++;
		scanf("%d",&horse_n[horse_i]);
	}while(horse_n[horse_i]!=0);
	
	for(i=0;i<horse_i;i++){
	InsertSort(horseTian[i],horse_n[i]);
	InsertSort(horseQi[i],horse_n[i]);}
	for(i=0;i<horse_i;i++)
		printf("%d\n",SaiMa(horseTian[i],horseQi[i],horse_n[i]));


}
void InsertSort(int Ptr[],int length)//??????
{
	int i,j,key;
	for(i=1;i<length;i++)
	{ 
		key=Ptr[i];
		j=i-1;
		while(j>=0&&Ptr[j]<key)
		{
			Ptr[j+1]=Ptr[j];
			j=j-1;
		}
		Ptr[j+1]=key;
	}
}
int SaiMa(int Tian[],int Qi[],int length)
{
	int l[1000][1000];
	int i,j;
	for(i=0;i<length;i++)
	{
		if(Qi[i]<Tian[0])
			l[i][0]=1;
		else
		if(Qi[i]==Tian[0])
			l[i][0]=0;
		else
			l[i][0]=-1;
		}
	for(i=length-2;i>=0;i--)
	{
		for(j=1;j<length-i;j++) //???????????????
		{
			if(Qi[i+j]<Tian[j]) //???????
				l[i][j]=l[i][j-1]+1;//????????
			else
			{
				if(Qi[i+j]>Tian[j])//???????
					l[i][j]=l[i+1][j-1]-1;//????????
				else //?????????
				{
					if(l[i+1][j-1]-1>l[i][j-1])//?????????????????
						l[i][j]=l[i+1][j-1]-1; //?????????????????
					else //??????????????
						l[i][j]=l[i][j-1]; //?????
}
}
}
}
return 200*l[0][length-1];
}
