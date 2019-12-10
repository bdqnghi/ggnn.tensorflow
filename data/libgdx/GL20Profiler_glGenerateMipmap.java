@Override
public void glGenerateMipmap(int target) {
    calls++;
    gl20.glGenerateMipmap(target);
    check();
}
