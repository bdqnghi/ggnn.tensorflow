int main( )
{
	int zhao, qian, sun, li, i;
	char weight[51];
	for(i = 0; i < 51; i++)
	{
		weight[i] = ' ';
	}
	for(zhao = 10; zhao <= 50; zhao=zhao+10)
		for(qian = 10; qian <= 50; qian=qian+10)
		{
			if(zhao != qian)
				for(sun = 10; sun <= 50; sun=sun+10)
				{
					if(zhao != sun && qian != sun)
					{
						for(li = 10; li <= 50; li=li+10)
							if(zhao != li && qian != li && sun != li)
								if(((zhao+qian)==(sun+li))&&((zhao+li)>(sun+qian))&&((zhao+sun)<qian))
								{
									weight[zhao] = 'z';
									weight[qian] = 'q';
									weight[sun] = 's';
									weight[li] = 'l';
									for(i = 50; i > 0; i--)
									{
										if(weight[i] != ' ')
											cout<<weight[i]<<" "<<i<<endl;
									}
								}
					}
				}
		}
		return 0;
}