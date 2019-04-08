//***********************************
//** ???Dec 11, 2013 - ???? **
//** ?????? 1300012719       **
//** ???2013.12.14              **
//***********************************
int main()
{
	int i, j, k = 0, n;                    //k???n????????
	struct p                               //???p????????
	{
		int x;
		int y;
		int z;
	} p[10];
	struct ptp                             //???ptp?????????????????,?????45,?????????????
	{
		int x1;
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		double dis;
	} ptp[46];
	cin >> n;                              //?????????????
	for (i = 0; i < n; i++)
		cin >> p[i].x >> p[i].y >> p[i].z;
	for (i = 0; i < n - 1; i++)            //?????????,?????????????
	for (j = i + 1; j < n; j++)
	{
		ptp[k].x1 = p[i].x;
		ptp[k].x2 = p[j].x;
		ptp[k].y1 = p[i].y;
		ptp[k].y2 = p[j].y;
		ptp[k].z1 = p[i].z;
		ptp[k].z2 = p[j].z;
		ptp[k].dis = sqrt((ptp[k].x1-ptp[k].x2) * (ptp[k].x1-ptp[k].x2) + 
						  (ptp[k].y1-ptp[k].y2) * (ptp[k].y1-ptp[k].y2) + 
						  (ptp[k].z1-ptp[k].z2) * (ptp[k].z1-ptp[k].z2));
		k++;
	}
	for (i = 0; i < k - 1; i++)            //??????ptp[45],?????????ptp???????
	for (j = 0; j < k - 1 - i; j++ )
	{
		if (ptp[j].dis < ptp[j + 1].dis)
		{
			ptp[45] = ptp[j];
			ptp[j] = ptp[j + 1];
			ptp[j + 1] = ptp[45];
		}
	}
	for (i = 0; i < k; i++)                //???????????
		cout << "(" << ptp[i].x1 << "," << ptp[i].y1 << "," << ptp[i].z1 << ")-(" 
					<< ptp[i].x2 << "," << ptp[i].y2 << "," << ptp[i].z2 << ")=" 
					<< fixed << setprecision(2) << ptp[i].dis << endl;
	return 0;
}