int main()
{
	int logicA , logicB , logicC;                                                                       
	int eatA , eatB , eatC;
	char ABC[3];
	for ( eatA = 1; eatA <=3; eatA++ )
	{
		for ( eatB = 1; eatB <=3; eatB++ )
		{
			for ( eatC = 1; eatC <=3; eatC++ )
			{
				logicA = ( (eatB > eatA) + (eatA == eatC) );
				logicB = ( (eatA > eatB) + (eatA > eatC) );
				logicC = ( (eatC > eatB) + (eatB > eatA) );
				if ( ((eatA > eatB && logicA < logicB)
					|| (eatA < eatB && logicA > logicB) || (eatA == eatB && logicA == logicB))
					+ ((eatA > eatC && logicA < logicC)
					|| (eatA < eatC && logicA > logicC) || (eatA == eatC && logicA == logicC))
					+ ((eatC > eatB && logicC < logicB)
					|| (eatC < eatB && logicC > logicB) || (eatC == eatB && logicC == logicB)) == 3 )
				{
					ABC[eatA] = 'A';
					ABC[eatB] = 'B';
					ABC[eatC] = 'C';
					cout << ABC[1] << ABC[2] << ABC[3];
				}
			}
		}
	}
	
	return 0;

}