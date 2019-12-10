public int hashCode() {
    final int prime = 31;
    int result = 1;
    result = prime + length;
    result = prime * result + Arrays.hashCode(chars);
    return result;
}
