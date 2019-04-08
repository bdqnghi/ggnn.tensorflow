
int main(int argc, char* argv[])
{
	int n,i;
	int y,m1,m2;
	int d1,d2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		d1=0;
		d2=0;
		scanf("%d%d%d",&y,&m1,&m2);
		if(y%100==0&&y%40==0||y%100!=0&&y%4==0)//leap
		{
			switch (m1)
			{
			case 1:d1+=0;break;
			case 2:d1+=31;break;
			case 3:d1+=60;break;
			case 4:d1+=91;break;
			case 5:d1+=121;break;
			case 6:d1+=152;break;
			case 7:d1+=182;break;
			case 8:d1+=213;break;
			case 9:d1+=244;break;
			case 10:d1+=274;break;
			case 11:d1+=305;break;
			case 12:d1+=335;break;
			}
            switch (m2)
			{
			case 1:d2+=0;break;
			case 2:d2+=31;break;
			case 3:d2+=60;break;
			case 4:d2+=91;break;
			case 5:d2+=121;break;
			case 6:d2+=152;break;
			case 7:d2+=182;break;
			case 8:d2+=213;break;
			case 9:d2+=244;break;
			case 10:d2+=274;break;
			case 11:d2+=305;break;
			case 12:d2+=335;break;
			}
			if((d1-d2)%7==0){printf("YES\n");}
			else printf("NO\n");
		}
		else
		{
			switch (m1)
			{
			case 1:d1+=0;break;
			case 2:d1+=31;break;
			case 3:d1+=59;break;
			case 4:d1+=90;break;
			case 5:d1+=120;break;
			case 6:d1+=151;break;
			case 7:d1+=181;break;
			case 8:d1+=212;break;
			case 9:d1+=243;break;
			case 10:d1+=273;break;
			case 11:d1+=304;break;
			case 12:d1+=334;break;
			}
            switch (m2)
			{
			case 1:d2+=0;break;
			case 2:d2+=31;break;
			case 3:d2+=59;break;
			case 4:d2+=90;break;
			case 5:d2+=120;break;
			case 6:d2+=151;break;
			case 7:d2+=181;break;
			case 8:d2+=212;break;
			case 9:d2+=243;break;
			case 10:d2+=273;break;
			case 11:d2+=304;break;
			case 12:d2+=334;break;
			}

			if((d1-d2)%7==0){printf("YES\n");}
			else printf("NO\n");

		}
	}

	return 0;
}