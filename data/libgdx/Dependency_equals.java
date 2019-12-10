@Override
public boolean equals(Object obj) {
    if (obj instanceof Dependency) {
        if (((Dependency) obj).getName().equals(getName())) {
            return true;
        }
    }
    return false;
}
