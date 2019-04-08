/*;
 * src.c
 *
 *  Created on: 2009-11-9
 *      Author: JacksonTB
 */

float calc_gpa(int a);
main()
{
	int gpa_all[10], score[10], gpa_sum = 0;
	float gpa0[10], gpa = 0;

	int n, i;

	scanf("%d", &n);

	for(i = 0;i <= n - 1;i ++)
	{
		scanf("%d", &gpa_all[i]);
		gpa_sum += gpa_all[i];
	}
	for(i = 0;i <= n - 1;i ++)
	{
		scanf("%d", &score[i]);
	}

	for(i = 0;i <= n - 1;i ++)
	{
		gpa += gpa_all[i] * calc_gpa(score[i]);
	}
	gpa /= (float)gpa_sum;
	printf("%.2f", gpa);
}


float calc_gpa(int a)
{
		switch(a)
		{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
		{
			return 4.0;
		}
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
			return 3.7;
		case 84:
		case 83:
		case 82:
			return 3.3;
		case 81:
		case 80:
		case 79:
		case 78:
			return 3;
		case 77:
		case 76:
		case 75:
			return 2.7;
		case 74:
		case 73:
		case 72:
			return 2.3;
		case 71:
		case 70:
		case 69:
		case 68:
			return 2;
		case 67:
		case 66:
		case 65:
		case 64:
			return 1.5;
		case 63:
		case 62:
		case 61:
		case 60:
			return 1;
		default:
			return 0;

	}
}
