@Override
public void create() {
    Timer timer = new Timer();
    Task task = timer.scheduleTask(new Task() {

        @Override
        public void run() {
            Gdx.app.log("TimerTest", "ping");
        }
    }, 1, 1);
    Gdx.app.log("TimerTest", "is task scheduled: " + String.valueOf(task.isScheduled()));
}
