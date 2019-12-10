@Override
public void dispose() {
    // Deleting the active contact listener, also disables that particular type of contact listener.
    if (contactProcessedListener != null)
        contactProcessedListener.dispose();
    contactProcessedListener = null;
    super.dispose();
}
