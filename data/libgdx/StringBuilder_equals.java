public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    StringBuilder other = (StringBuilder) obj;
    int length = this.length;
    if (length != other.length)
        return false;
    char[] chars = this.chars;
    char[] chars2 = other.chars;
    if (chars == chars2)
        return true;
    if (chars == null || chars2 == null)
        return false;
    for (int i = 0; i < length; i++) if (chars[i] != chars2[i])
        return false;
    return true;
}
