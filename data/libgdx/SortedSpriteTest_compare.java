@Override
public int compare(MySprite sprite1, MySprite sprite2) {
    return (sprite2.z - sprite1.z) > 0 ? 1 : -1;
}
