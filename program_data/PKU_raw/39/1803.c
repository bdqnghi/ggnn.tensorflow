
int main()
{
	int N, i, final_g, class_g, nPapers;
	int scholarship, max_s, sum;
	char isCadre, isWest;
	char buffer[21];
	char name[21];

	scanf("%d", &N);
	sum = 0;
	max_s = 0;
	for (i=0; i<N; i++) {
		scanf("%s %d %d %c %c %d", buffer, &final_g, &class_g, &isCadre, &isWest, &nPapers);
		scholarship = 0;
				if (final_g>80 && nPapers>0)
			scholarship += 8000;
				if (final_g>85 && class_g>80)
			scholarship += 4000;
				if (final_g>90)
			scholarship += 2000;
				if (final_g>85 && isWest=='Y')
			scholarship += 1000;
				if (class_g>80 && isCadre=='Y')
			scholarship += 850;

		if (scholarship > max_s) {
			strcpy(name, buffer);
			max_s = scholarship;
		}
		sum += scholarship;
	}
	printf("%s\n%d\n%d\n", name, max_s, sum);

	return 0;
}
