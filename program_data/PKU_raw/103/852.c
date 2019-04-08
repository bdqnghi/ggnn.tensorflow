
int main()
{
	int count = 1, flag = 1;
	char a, last = '0';
	while ((a = cin.get()) != '\n')
	{
		flag = 1;
		if (last >= 'a' && last <= 'z')
			if (a == last || a == last - 32)
			{
				count++;
				flag = 0;
			}
		if (last >= 'A' && last <= 'Z')
			if (a == last || a == last + 32)
			{
				count++;
				flag = 0;
			}
		if (flag)
		{
			if (last != '0')
				cout << count << ")";
			switch (a)
			{
			case 'a': cout << "(A,"; break;
			case 'A': cout << "(A,"; break;
			case 'b': cout << "(B,"; break;
			case 'B': cout << "(B,"; break;
			case 'c': cout << "(C,"; break;
			case 'C': cout << "(C,"; break;
			case 'd': cout << "(D,"; break;
			case 'D': cout << "(D,"; break;
			case 'e': cout << "(E,"; break;
			case 'E': cout << "(E,"; break;
			case 'f': cout << "(F,"; break;
			case 'F': cout << "(F,"; break;
			case 'g': cout << "(G,"; break;
			case 'G': cout << "(G,"; break;
			case 'h': cout << "(H,"; break;
			case 'H': cout << "(H,"; break;
			case 'i': cout << "(I,"; break;
			case 'I': cout << "(I,"; break;
			case 'j': cout << "(J,"; break;
			case 'J': cout << "(J,"; break;
			case 'k': cout << "(K,"; break;
			case 'K': cout << "(K,"; break;
			case 'l': cout << "(L,"; break;
			case 'L': cout << "(L,"; break;
			case 'm': cout << "(M,"; break;
			case 'M': cout << "(M,"; break;
			case 'n': cout << "(N,"; break;
			case 'N': cout << "(N,"; break;
			case 'o': cout << "(O,"; break;
			case 'O': cout << "(O,"; break;
			case 'p': cout << "(P,"; break;
			case 'P': cout << "(P,"; break;
			case 'q': cout << "(Q,"; break;
			case 'Q': cout << "(Q,"; break;
			case 'r': cout << "(R,"; break;
			case 'R': cout << "(R,"; break;
			case 's': cout << "(S,"; break;
			case 'S': cout << "(S,"; break;
			case 't': cout << "(T,"; break;
			case 'T': cout << "(T,"; break;
			case 'u': cout << "(U,"; break;
			case 'U': cout << "(U,"; break;
			case 'v': cout << "(V,"; break;
			case 'V': cout << "(V,"; break;
			case 'w': cout << "(W,"; break;
			case 'W': cout << "(W,"; break;
			case 'x': cout << "(X,"; break;
			case 'X': cout << "(X,"; break;
			case 'y': cout << "(Y,"; break;
			case 'Y': cout << "(Y,"; break;
			case 'z': cout << "(Z,"; break;
			case 'Z': cout << "(Z,"; break;
			}
			last = a;
			count = 1;
		}
	}
	cout << count << ")" << endl;
	return 0;
}
