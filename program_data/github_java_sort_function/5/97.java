  
  public static void bubbleSort1(Sequence S) {
    int n = S.size();
    for (int i=0; i < n; i++)	
      for (int j=1; j < n-i; j++) 
	if ( valAtRank(S, j-1) > valAtRank(S, j) )
	  S.swapElements(S.atRank(j-1), S.atRank(j));
  }
  
  public static void bubbleSort2(Sequence S) {
    Position prec, succ;
    int n = S.size();
    for (int i=0; i < n; i++) {	
      prec = S.first();
      for (int j=1; j < n-i; j++) {
	succ = S.after(prec);
	if ( valAtPos(prec) > valAtPos(succ) )
	  S.swapElements(prec, succ);
	prec = succ;
      }
    }
  }
  private static int valAtRank(Sequence S, int i) {
    return ((Integer) S.elemAtRank(i)).intValue();
  }
  private static int valAtPos(Position p) {
    return ((Integer) p.element()).intValue();
  }
