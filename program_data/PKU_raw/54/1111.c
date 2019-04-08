int pseudo_main() 
{ 
	int monkeys, throw_away;
	int apples; 
	int i; 
	scanf("%d %d", &monkeys, &throw_away);
	int last = 0; 
	while(1){
		 last++; 
		 apples = last*monkeys+throw_away;
		int divides = 1;
		for (i=1; (i<monkeys)&&divides;++i) {
			divides = (apples % (monkeys - 1) == 0); 
			apples = apples/(monkeys - 1)*monkeys+throw_away;
		} 
		if(divides) 
			break;
}
	printf("%d\n", apples); 
} 
int main() 
	{ pseudo_main(); }