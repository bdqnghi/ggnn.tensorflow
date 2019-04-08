char dui[1000];
void rankgame(int left, int right, char male, char female)
{
	if(left == -1)return;
	if(dui[right] == male)
	{
		left = right;
		right++;
		rankgame(left, right, male, female);
	}
	if(dui[left] == 0)
	{
		left --;
		rankgame(left, right, male, female);
	}
	if(dui[left] == male && dui[right] == female)
	{
		cout << left << ' ' << right << endl;
		dui[left] = 0;dui[right] = 0;
		left --;
		right ++;
		rankgame(left, right, male, female);
	}
}
int main()
{
	cin.getline(dui, 1000, '\n');
	char male = dui[0], female = dui[strlen(dui) - 1];
	rankgame(0, 1, male, female);
	return 0;
}
