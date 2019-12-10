private void edit() {
    if (editor == null) {
        editor = sharedPrefs.edit();
    }
}
