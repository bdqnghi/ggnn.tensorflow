public static void setDefaultUncaughtExceptionHandler(final Thread.UncaughtExceptionHandler javaHandler) {
    GWT.setUncaughtExceptionHandler(new GWT.UncaughtExceptionHandler() {

        @Override
        public void onUncaughtException(Throwable e) {
            final Thread th = new Thread() {

                @Override
                public String toString() {
                    return "The only thread";
                }
            };
            javaHandler.uncaughtException(th, e);
        }
    });
}
