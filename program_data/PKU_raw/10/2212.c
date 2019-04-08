/*
 * =====================================================================================
 *
 *       Filename:  missle.c
 *
 *    Description:  missle
 *
 *        Version:  1.0
 *        Created:  2007-12-2 11:15:15 ??????
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Meng Xinfan (fl), mxf@pku.edu.cn
 *        Company:  PKU
 *
 * =====================================================================================
 */

enum {
	MAX_NUM = 25
};

int main(){
		int missle_num = 0;
		// height: [[height_of_missle, max_num_of_descending_missle_since_then] ...]
		int height [MAX_NUM][2];
		int i, j;
		int max = 0;
		scanf("%d", &missle_num);

		for (i = 0; i < missle_num; i++){
			scanf("%d", &height[i][0]);
			height[i][1] = 1;
		}

		for (i = 0; i < missle_num; i++){
			/*printf("%d ", height[i][0]);*/
		}

		for (i = 0 ; i < missle_num; i++){
			for (j = i-1; j >= 0; j--){
				if (height[i][0] <= height[j][0] ){
					if (height[i][1] < height[j][1] + 1){
						height[i][1] = height[j][1] + 1;
					}
				}
			}
		}

	max = 0;
	for (i = 0; i < missle_num; i++){
		/*printf("%d ", height[i][1]);*/
		if (max < height[i][1]){
			max = height[i][1];
		}
	}
	printf("\n%d\n", max);
	return 0;
}
