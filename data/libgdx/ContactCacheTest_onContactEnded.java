@Override
public void onContactEnded(btCollisionObject colObj0, boolean match0, btCollisionObject colObj1, boolean match1) {
    final int userValue0 = colObj0.getUserValue();
    final int userValue1 = colObj1.getUserValue();
    if (match0) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue0));
        e.setColor(Color.BLUE);
        Gdx.app.log(Float.toString(time), "Contact ended " + userValue0);
    }
    if (match1) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue1));
        e.setColor(Color.BLUE);
        Gdx.app.log(Float.toString(time), "Contact ended " + userValue1);
    }
}
