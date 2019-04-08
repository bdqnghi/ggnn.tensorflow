int a[6];//????????1-5??ABCDE
int judge(int i)//??a[i]????
{
	if(i == 1)
	{
		if(a[5] == 1)
			return 1;
		else
			return 0;
	}
	else if(i == 2)
	{
		if(a[5] == 1)
		   return 1;
	    else
		   return 0;
	}
	else if(i == 3)
	{
		if(a[1] ==5)
		return 1;
	    else
		return 0;
    }
	else if(i == 4)
	{
		if(a[3]!=1)
		return 1;
	    else
		return 0;
	}
	else
	{
		if(a[4] ==1)
		return 1;
	else
		return 0;
	}
}
int search(int a[5])//???????????????1-5????
{
	for(int i = 1;i<=5;i++)
		for(int j = 1;j<=5;j++)
		{
			if(j == i)
			{
				j++;
				continue;
			}
			else
			{
				if(a[i] == a[j])
					return 0;
			}
		}
		return 1;
}
int main()
{
	 a[1] = 1;
	 a[2] = 2;
	 a[3] = 3;
	 a[4] = 4;
	 a[5] = 5;
	 while(1)
	 {
		 if(search(a))//??????????????
		 {
		 int p,q;
		 for(int i =1;i<=5;i++)
		 {
			 if(a[i] == 1) p = i;
			 else if(a[i] == 2) q = i;
		 }
		 int s;
		 s = 1;
		 for(s;s<=5;s++)
		 {
			 if((s == p)||(s==q))
			 {
				 if(judge(s) == 0)
					 break;
			 }
			 else
			 {
				 if(judge(s))
					 break;
			 }
		 }
		 if(s ==6)//???????????????
		 {
			 a[1] = 5;a[2] = 2;a[3] = 1;a[4] = 3;a[5]  = 4;
			 printf("%d %d %d %d %d",a[1],a[2],a[3],a[4],a[5]);
			 return 0;
		 }
		 else
		 {
			 if(a[5]<5)
				 a[5]++;
			 else
			 {
				 int x = 4;
				 while(x>=1)
				 {
					 if(a[x] <5)
					 {
						 int y = x+1;
						 a[x] ++;
						 while(y<=5)
						 {
							 a[y] = 1;
							 y++;
						 }
						 break;
					 }
					 x--;
				 }
			 }
		 }
		 }
		 else 
		 {
			 if(a[5]<5)
				 a[5]++;
			 else
			 {
				 int x = 4;
				 while(x>=1)
				 {
					 if(a[x] <5)
					 {
						 int y = x+1;
						 a[x] ++;
						 while(y<=5)
						 {
							 a[y] = 1;
							 y++;
						 }
						 break;
					 }
					 x--;
				 }
			 }
		 }
	 }
}