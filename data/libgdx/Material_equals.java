@Override
public boolean equals(Object other) {
    return (other instanceof Material) && ((other == this) || ((((Material) other).id.equals(id)) && super.equals(other)));
}
