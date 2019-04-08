int main()
{
	int a,b,c,d,e;  //??
	int wordsright[6];   //???????????
	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
		{
			if(b==a) continue;
			for(c=1;c<6;c++)
			{
				if((c==a)||(c==b)) continue;
				for(d=1;d<6;d++)
				{
					if((d==a)||(d==b)||(d==c)) continue;
					for(e=1;e<6;e++)
					{
						if((e==2)||(e==3)) continue;
						if((e==a)||(e==b)||(e==c)||(e==d))
							continue;
						wordsright[a]=(e==1);
						wordsright[b]=(b==2);
						wordsright[c]=(a==5);
						wordsright[d]=(c!=1);
						wordsright[e]=(d==1);
						if((wordsright[1]==1)&&(wordsright[2]==1))
						{
							if((wordsright[3]==0)&&(wordsright[4]==0)&&(wordsright[5]==0))
							{
								goto m;
							}
						}
					}
				}
			}
		}
	}
	m:
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
