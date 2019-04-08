
struct SeqList
{
	int MAXNUM;
	int n;
	int * element;
};
typedef struct SeqList * pSeqList;

pSeqList createNullList_Seq( int m)  //??????
{
	int i;
	pSeqList palist = (pSeqList) malloc(sizeof(struct SeqList));
	if (palist != NULL)
	{
		palist -> element = (int *)malloc(sizeof(int) * m);
		if(palist -> element)
		{
			palist -> MAXNUM = m;
			palist -> n = 0;
			for(i=0; i<m; i++)
				palist -> element[i] = 0;
			return palist;
		}
		else free( palist);
	}
	cout << "Out of space!! "<< endl;
	return NULL;
}

int isNullList_Seq(pSeqList palist)  //???????
{ 
	return (palist->n == 0);
}

int initialList_Seq(pSeqList pblist)  //??????
{
	int i;
	if(isNullList_Seq(pblist))  
		return -1;

	for(i=0; i<pblist -> n; i++)
		pblist -> element[i] = 0;
	return 0;

}

int insertEnd_Seq(pSeqList palist, int x)
{
	if(palist->n >= palist->MAXNUM)  //??
	{
		cout << "Overflow! " << endl;
		return -1;
	}
	palist->element[palist->n] = x;
	palist->n += 1;
	return 0;
}

int add(pSeqList num1, pSeqList num2, pSeqList sum)
{
	int a = initialList_Seq( sum);   //?sum????????
	int i;
	for(i=0; i< MAX_LEN; i++) 
		//?num1?num2???????????????sum??
		sum->element[i] = num1->element[i] + num2->element[i];
	for(i=0; i<= MAX_LEN; i++)
		if(sum->element[i] > 9)
		{
			sum->element[i] -= 10;
			sum->element[i+1] += 1;
		}
	return 0;

}

int printList_Seq(pSeqList result)  //????
{
	if(isNullList_Seq(result) == 0)  //??????
		return -1;
	int i;
	int flag = 0;    
	for(i=MAX_LEN; i >=0; i--)
	{
		if(result->element[i] != 0)   //??????????????
			flag = 1;
		if(flag == 0)  continue;
		cout << result->element[i];
	}
	if(flag == 0)  cout << 0;
	cout << endl;
	return 0;
}

int main()
{
	pSeqList element1 = createNullList_Seq(MAX_LEN);
	pSeqList element2 = createNullList_Seq(MAX_LEN);
	pSeqList result = createNullList_Seq(MAX_LEN+1);

	char szLine1[MAX_LEN+10];
	char szLine2[MAX_LEN+10];
	cin >> szLine1 >> szLine2;

	int lenth1 = strlen(szLine1);
	int lenth2 = strlen(szLine2);
	//cout << "eeeee1" << endl;
	if(lenth1>MAX_LEN ||  lenth2>MAX_LEN)
	{
		cout << "Input error!!" << endl;
	    return 0;
	}
   //cout << "eeeee2" << endl;
	int i;
	for(i = lenth1-1; i>=0; i --)
	{
		int a = insertEnd_Seq(element1, szLine1[i]-'0');
		if(a == -1)
		{
			cout << "Input error !! " << endl;
			return 0;
		}
	}
    for(i = lenth2-1; i>=0; i --)
	{
		int b = insertEnd_Seq(element2, szLine2[i]-'0');
		if(b == -1)
		{
			cout << "Input error !! " << endl;
			return 0;
		}
	}
	//cout << "eeeee3" << endl;
	int c = add(element1, element2, result);
	if(c == -1)
	{
		cout << "Fail in add!! " << endl;
		return 0;
	}
	//cout << "eeeee4" << endl;
	printList_Seq(result);
	//cout << "eeeee5" << endl;

	return 0;
}