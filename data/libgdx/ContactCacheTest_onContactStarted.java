@Override
public void onContactStarted(btPersistentManifold manifold, boolean match0, boolean match1) {
    final int userValue0 = manifold.getBody0().getUserValue();
    final int userValue1 = manifold.getBody1().getUserValue();
    if (match0) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue0));
        e.setColor(Color.RED);
        Gdx.app.log(Float.toString(time), "Contact started " + userValue0);
    }
    if (match1) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue1));
        e.setColor(Color.RED);
        Gdx.app.log(Float.toString(time), "Contact started " + userValue1);
    }
}
