/*??????
 *?????function3-4.cpp
 *Created on: 2012-12-4
 *?????????
 */

char input[105], output[105];//??????

void f()

{

	memset(output, 0, sizeof(output));//

	int l = 0, r = 0;

	int len = strlen(input);

	int i;

	for (i = 0; i < len; ++i)

	{

		output[i] = ' ';

		if (input[i] == ')')

		{

			if (l <= 0)

				output[i] = '?';//?????‘?’??

			else

				l--;

		}

		else if (input[i] == '(')

			l++;

	}

	l = r = 0;

	for (i = len; i >= 0; --i)

	{

		if (input[i] == '(')

		{

			if (r <= 0)

				output[i] = '$';//?????‘?’??

			else

				r--;

		}

		else if (input[i] == ')')

			r++;

	}

	cout << input << endl ;

	cout<< output << endl ;//????

}
int main() {

	while (cin.getline(input, 105)) {



		f();

	}

	return 0;//????
}

