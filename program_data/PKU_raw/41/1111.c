int main()
{
	int A[5];
	int a[5];
	int flag = 0;
	int count = 0;

	for(a[0] = 5; a[0] >0;a[0]--)
	{
		if(flag == 1)break;
		for(a[1] = 1; a[1] < 6;a[1]++)
		{
			if(flag == 1)break;
			if(a[1] == a[0])continue;
			for(a[2] = 1; a[2] < 6;a[2]++)
			{
				if(flag == 1)break;
				if(a[2] == a[1]||a[2]==a[0])continue;
				for(a[3] = 1; a[3] < 6;a[3]++)
				{
					if(flag == 1)break;
					if(a[3] == a[2]||a[3]==a[1]||a[3]==a[0])continue;
					for(a[4] = 1; a[4] < 6;a[4]++)
					{
						if(flag == 1)break;
						if(a[4] == a[1]||a[4]==a[2]||a[4]==a[0]||a[4]==a[3])continue;
						if(a[4]==2||a[4]==3)continue;
						A[0] = (a[4] == 1);
						A[1] = (a[1] == 2);
						A[2] = (a[0] == 5);
						A[3] = (a[2] != 1);
						A[4] = (a[3] == 1);
						count = 0;
						for(int i = 0; i<5;i++)
						{
							if(a[i] < 3 && A[i] == 1)
								count ++;
						}
						if(count == 2)
						{
							cout<<a[0] <<" "<<a[1] <<" "<<a[2] <<" "<<a[3] <<" "<<a[4] <<endl;
							flag = 1;
						}

					}
				}
			}
		}
	}
	return 0;
}