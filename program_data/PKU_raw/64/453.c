/**
* @file C12Q4.cpp
* @author ???
* @date 2013-12-14
* @description
* ??????:????
*/





typedef struct node
{
	int x,y,z;
}node;

typedef struct distance
{
	node*pn1,*pn2;
	double v;
}dis;



int main()
{
	int n;
	node ns[MAX];
	dis ds[MAX*MAX];
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> ns[i].x >> ns[i].y >> ns[i].z;
	}
	int p = 0 ; 
	for(int i = 0 ; i < n ; i++)
		for(int j = i+1 ; j < n ; j++)
		{
			ds[p].pn1 = ns+i;
			ds[p].pn2 = ns+j;
			ds[p].v = sqrt((ns[i].x - ns[j].x)*(ns[i].x - ns[j].x)+(ns[i].y - ns[j].y)*(ns[i].y - ns[j].y)
				+(ns[i].z - ns[j].z)*(ns[i].z - ns[j].z));
			p++;
		}
	for(int i = 0 ; i < p ; i++)
	{
		for(int j = p-1; j > i ; j--)
		{
			if (ds[j].v > ds[j-1].v)
			{
				dis tmp = ds[j];
				ds[j] = ds[j-1];
				ds[j-1] = tmp;
			}
		}
	}

	for(int i = 0 ; i < p ; i ++)
	{
		cout << '(' <<ds[i].pn1 ->x << ',' << ds[i].pn1 ->y << ',' << ds[i].pn1 ->z << ')' << '-' ;
		cout << '(' <<ds[i].pn2 ->x << ',' << ds[i].pn2 ->y << ',' << ds[i].pn2 ->z << ')' << '=' ;
		cout << setprecision(2) << fixed <<ds[i].v << endl;
	}
	return 0;
}