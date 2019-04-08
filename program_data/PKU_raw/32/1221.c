//*****************************
//*?????? 1300012809   **
//*???2013.11.16          **
//*????????          **
//*****************************
int main()
{
	int n, i, j, k, changdu1, changdu2, jieguo[1005];
	char jianshu[1005], beijianshu[1005];
	char zhongjian[1005];
	cin >> n;
	cin.get();
	for (k=0; k<n; k++)
	{
		if (k!=0) cin.get();
		cin.getline(beijianshu,1001);
		cin.getline(jianshu,1001);
	    changdu1 = strlen(beijianshu);
	    changdu2 = strlen(jianshu);
	    for (i=0; i<changdu1; i++)	zhongjian[i] = beijianshu[i];
	    for (i=0; i<changdu1; i++)     
		{ 
		    beijianshu[i] = zhongjian[changdu1-1-i];
	     	if (beijianshu[i]==' ')  beijianshu[i]='0' ;
		}
	    for (i=0; i<changdu2; i++)		zhongjian[i] = jianshu[i];
	    for (i=0; i<changdu2; i++)     
		{ 
	     	jianshu[i] = zhongjian[changdu2-1-i];
	    	if (jianshu[i]==' ')  jianshu[i]='0' ;
		}
	    //?????
     	for (i=0; i<changdu2; i++)
		{
		   if (beijianshu[i]<jianshu[i])
		   {
		    	jieguo[i] = 10 - jianshu[i] + beijianshu[i];
		    	if (beijianshu[i+1] != '0') beijianshu[i+1] -= 1 ;
		    	else 
				{ 
			    	j=i;
			     	while(beijianshu[j+1]=='0')
					{
			     		beijianshu[j+1] = '9' ;
			    		j = j + 1 ;
					}
			    	beijianshu[j+1] -= 1 ;
				}
		   }
	    	else
			{
		    	jieguo[i] = beijianshu[i] - jianshu[i] ;
		
			}
		}
	    for (i=changdu2; i<changdu1; i++)
	    	jieguo[i]=beijianshu[i] - '0' ;
	    if (beijianshu[changdu1-1]=='0') changdu1 -= 1;
	    for (i=changdu1-1; i>=0; i--) cout << jieguo[i] ;
	    cout << endl;
	}
	return 0;
}

