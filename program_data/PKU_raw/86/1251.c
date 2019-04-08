int main()
{
int n, interuptCount, currentNum, sec, lostTime ;
const int maxSeconds = 60;
cin >> n;
for (int i = 0; i < n; ++i)
{ cin >> interuptCount;
lostTime = 0; 
for (int j = 0; j < interuptCount; ++j)
{ cin >> currentNum;
sec = currentNum + lostTime; 
if (sec < maxSeconds)
if ((maxSeconds - sec) > 3)
lostTime += 3;
else
lostTime += maxSeconds - sec;
}
cout << maxSeconds - lostTime << endl;
} 
	return 0;
}




