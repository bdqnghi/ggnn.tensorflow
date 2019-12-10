public void flip() {
    byte tempA = indexA;
    indexA = indexB;
    indexB = tempA;
    tempA = typeA;
    typeA = typeB;
    typeB = tempA;
}
