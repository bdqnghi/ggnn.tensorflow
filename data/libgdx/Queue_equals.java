public boolean equals(Object o) {
    if (this == o)
        return true;
    if (o == null || !(o instanceof Queue))
        return false;
    Queue<?> q = (Queue<?>) o;
    final int size = this.size;
    if (q.size != size)
        return false;
    final T[] myValues = this.values;
    final int myBackingLength = myValues.length;
    final Object[] itsValues = q.values;
    final int itsBackingLength = itsValues.length;
    int myIndex = head;
    int itsIndex = q.head;
    for (int s = 0; s < size; s++) {
        T myValue = myValues[myIndex];
        Object itsValue = itsValues[itsIndex];
        if (!(myValue == null ? itsValue == null : myValue.equals(itsValue)))
            return false;
        myIndex++;
        itsIndex++;
        if (myIndex == myBackingLength)
            myIndex = 0;
        if (itsIndex == itsBackingLength)
            itsIndex = 0;
    }
    return true;
}
