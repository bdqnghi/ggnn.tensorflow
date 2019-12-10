@Override
public int hashCode() {
    final int prime = 73;
    int result = 1;
    result = prime * result + this.direction.hashCode();
    result = prime * result + this.origin.hashCode();
    return result;
}
