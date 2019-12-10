@Override
public void onContactProcessed(int userValue0, boolean match0, int userValue1, boolean match1) {
    if (match0) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue0));
        // Disable future callbacks for this entity
        e.body.setContactCallbackFilter(0);
        e.setColor(Color.RED);
        Gdx.app.log("ContactCallbackTest", "Contact processed " + (++c));
    }
    if (match1) {
        final BulletEntity e = (BulletEntity) (entities.get(userValue1));
        // Disable future callbacks for this entity
        e.body.setContactCallbackFilter(0);
        e.setColor(Color.RED);
        Gdx.app.log("ContactCallbackTest", "Contact processed " + (++c));
    }
}
