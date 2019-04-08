int main()
{
	int row , col , a[8][8], an_dian_shu = 0;
	char dou_hao;
	scanf("%d%c%d",&row,&dou_hao,&col);
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
    }
	for(int i = 0;i<row;i++)
	{
		for(int j = 0;j<col;j++)                                        

		{
			int hang_zui_da = 0 , lie_zui_xiao = 0;
			for(int k = 0;k<col;k++)
			{
				if(a[i][j] < a[i][k])
					hang_zui_da ++;
			}                                                          

			for(int l = 0;l<row;l++)
			{
				if(a[i][j] > a[l][j])
					lie_zui_xiao ++;
			}                                                         

			if(hang_zui_da == 0 && lie_zui_xiao == 0)                    


			{
				printf("%d+%d",i,j);
				an_dian_shu ++;                                          
			}
		}
	}
	if(an_dian_shu == 0){
		printf("No");
	}
	return 0;
}

