//************************************************************************
//??????
//?????????
//??????
//************************************************************************
int main()
{
	int mZ,mQ, mS, mL, c, sum, m[4];
	char name[4] = {'z', 'q', 's', 'l'}, n;
	for(mZ = 10; mZ <= 50; mZ = mZ +10)
		for(mQ = 10; mQ <= 50; mQ = mQ +10)
			for(mS = 10; mS <= 50; mS = mS + 10)
				for(mL = 10; mL <= 50; mL = mL +10)
				{
					sum = (mZ + mQ == mS + mL) +(mZ + mL > mS + mQ) + (mZ + mS < mQ);
					if(sum == 3)
					{
						m[0] = mZ;
						m[1] = mQ;
						m[2] = mS;
						m[3] = mL;
					}
				}
	for(int j = 0; j < 3; j++)
	{
	   for(int i = 0; i < 3; i++)
	   {
		   if(m[i] < m[i+1])
		   {
			   c = m[i+1];
			   n = name[i+1]; 
			   m[i+1] = m[i];
			   name[i+1] = name[i];
			   m[i] = c;
			   name[i] = n;
		   }
	   }
	}
	cout<<name[0]<<" "<<m[0]<<endl;
	cout<<name[1]<<" "<<m[1]<<endl;
	cout<<name[2]<<" "<<m[2]<<endl;
	cout<<name[3]<<" "<<m[3]<<endl;
	return 0;
}