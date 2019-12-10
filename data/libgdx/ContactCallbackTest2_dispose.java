@Override
public void dispose() {
    // Deleting the active contact listener, also disables that particular type of contact listener.
    if (contactListener != null)
        contactListener.dispose();
    contactListener = null;
    super.dispose();
}
