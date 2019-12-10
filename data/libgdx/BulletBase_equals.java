@Override
public boolean equals(Object obj) {
    return (obj instanceof BulletBase) && (((BulletBase) obj).cPointer == this.cPointer);
}
