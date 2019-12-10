@Override
public boolean tap(float x, float y, int count, int button) {
    projectile = shoot(x, y);
    return true;
}
