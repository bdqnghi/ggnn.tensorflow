@Override
public void glGenerateMipmap(int target) {
    calls++;
    gl30.glGenerateMipmap(target);
    check();
}
