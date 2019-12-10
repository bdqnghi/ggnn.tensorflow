@Override
public int hashCode() {
    final int prime = 31;
    int result = 1;
    result = prime * result + ((ex == null) ? 0 : ex.hashCode());
    result = prime * result + ((ey == null) ? 0 : ey.hashCode());
    result = prime * result + ((ez == null) ? 0 : ez.hashCode());
    return result;
}
