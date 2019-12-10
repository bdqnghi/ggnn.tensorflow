@Override
public void onContactStarted(int userValue0, boolean match0, int userValue1, boolean match1) {
    if (match0) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue0));
        e.setColor(Color.RED);
        Gdx.app.log("ContactCallbackTest", "Contact started " + userValue0);
    }
    if (match1) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue1));
        e.setColor(Color.RED);
        Gdx.app.log("ContactCallbackTest", "Contact started " + userValue1);
    }
}
