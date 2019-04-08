
int m(int c[],int i);
int main()
{ 	const int MAX_LEN = 251;
    int an1[MAX_LEN]={0},an2[MAX_LEN]={0},n;
	char seLine1[MAX_LEN + 1]={0}; char seLine2[MAX_LEN + 1]={0};
	    int p=0;
	    cin.getline(seLine1, MAX_LEN + 1);
	    cin.getline(seLine2, MAX_LEN + 1);
	    int nLen1 = strlen(seLine1);
	    int nLen2 = strlen(seLine2);
	    memset(an1, 0, sizeof(an1));
	    memset(an2, 0,sizeof(an2));
	    int i, j=0;
	    for (i = nLen1-1;  i>=0; i--)
	    	an1[j++] = seLine1[i] - '0'; //???????????????
	    j=0;
	    for (i = nLen2-1; i>=0;i--)
	    	an2[j++] = seLine2[i] - '0';
	    for (i = 0; i < MAX_LEN ;i++)
	    {
		    an1[i] += an2[i];
		    p=i;
		    if(m(an1,p))              //??????
		        continue;
	    }
	    i = MAX_LEN - 1;
	    while(an1[i]==0 && i>0) i--; //???????0??
	    for(;i >= 0; i--)
		    cout << an1[i];   //??????
}

int m(int c[],int p)              //m????????
{
	if (c[p]>=10)                   //?c[p]???10??????????c[p+1],p+1
	{
		c[p]-=10;
		c[p+1]++;
	    return (c[p+1],p+1);
	}
	else                          //????1
		return 1;
}