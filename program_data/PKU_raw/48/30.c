
void output(int a[9][9])
{
     int x, y;
     	for(x = 0;x <= 8;x ++)
	{
		for(y = 0;y <= 8;y ++)
		{
			printf("%d", a[x][y]);
			if(y != 8)printf(" ");
		}
		printf("\n");
	}
}



int main()
{
	int a[9][9] = {0};
	int i, j, k;


	int addup[9][9] = {0};

	int m , day;
	int x, y;
	scanf("%d", &m);
	scanf("%d", &day);
	a[4][4] = m;

	for(i = 1;i <= day;i ++)
	{
		for(x = 0;x <= 8; x++)
		{
			//printf("[%d]\n", a[0][0]);
			for(y = 0;y <= 8;y ++)
			{
//				if(a[x][y] != 0)
				{
					addup[x - 1][y - 1] += a[x][y];
					addup[x - 1][y] += a[x][y];
					addup[x - 1][y + 1] += a[x][y];
					addup[x][y - 1] += a[x][y];
					addup[x][y] += 2 * a[x][y];
					addup[x][y + 1] += a[x][y];
					addup[x + 1][y - 1] += a[x][y];
					addup[x + 1][y] += a[x][y];
					addup[x + 1][y + 1] += a[x][y];

                    /*if((x == 4) && (y == 4))
                    {
                          for(k = x - 1;k <= x + 1;k ++)
                          {
                                for(j = y - 1;j <= y + 1;j ++)
                                {
                                      printf("[%3d] ", addup[k][j]);
                                }
                                printf("\n");
                          }
                          printf("+_+_+_\n");
                          output(addup);
                          printf("+_+_+_\n");
                    }*/
					




				}
			}
		}
		//printf("[%d]\n", a[0][0]);
		/*printf("-----add--------\n");
        output(addup);
		printf("-----add end--------\n");*/
		for(x = 0;x <= 8;x ++)
		{
			for(y = 0;y <= 8;y ++)
			{
				a[x][y] = addup[x][y];
				addup[x][y] = 0;
			}
		}
  /*printf("--[][]--\n");
		output(addup);
          printf("--[][]--\n");*/

	}
 output(a);
}