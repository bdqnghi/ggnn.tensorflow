@Override
public void run() {
    while (true) {
        try {
            connected = false;
            if (listener != null)
                listener.onDisconnected();
            System.out.println("listening, port " + port);
            Socket socket = null;
            socket = serverSocket.accept();
            socket.setTcpNoDelay(true);
            socket.setSoTimeout(3000);
            connected = true;
            if (listener != null)
                listener.onConnected();
            DataInputStream in = new DataInputStream(socket.getInputStream());
            multiTouch = in.readBoolean();
            while (true) {
                int event = in.readInt();
                KeyEvent keyEvent = null;
                TouchEvent touchEvent = null;
                switch(event) {
                    case RemoteSender.ACCEL:
                        accel[0] = in.readFloat();
                        accel[1] = in.readFloat();
                        accel[2] = in.readFloat();
                        break;
                    case RemoteSender.COMPASS:
                        compass[0] = in.readFloat();
                        compass[1] = in.readFloat();
                        compass[2] = in.readFloat();
                        break;
                    case RemoteSender.SIZE:
                        remoteWidth = in.readFloat();
                        remoteHeight = in.readFloat();
                        break;
                    case RemoteSender.KEY_DOWN:
                        keyEvent = new KeyEvent();
                        keyEvent.keyCode = in.readInt();
                        keyEvent.type = KeyEvent.KEY_DOWN;
                        break;
                    case RemoteSender.KEY_UP:
                        keyEvent = new KeyEvent();
                        keyEvent.keyCode = in.readInt();
                        keyEvent.type = KeyEvent.KEY_UP;
                        break;
                    case RemoteSender.KEY_TYPED:
                        keyEvent = new KeyEvent();
                        keyEvent.keyChar = in.readChar();
                        keyEvent.type = KeyEvent.KEY_TYPED;
                        break;
                    case RemoteSender.TOUCH_DOWN:
                        touchEvent = new TouchEvent();
                        touchEvent.x = (int) ((in.readInt() / remoteWidth) * Gdx.graphics.getWidth());
                        touchEvent.y = (int) ((in.readInt() / remoteHeight) * Gdx.graphics.getHeight());
                        touchEvent.pointer = in.readInt();
                        touchEvent.type = TouchEvent.TOUCH_DOWN;
                        break;
                    case RemoteSender.TOUCH_UP:
                        touchEvent = new TouchEvent();
                        touchEvent.x = (int) ((in.readInt() / remoteWidth) * Gdx.graphics.getWidth());
                        touchEvent.y = (int) ((in.readInt() / remoteHeight) * Gdx.graphics.getHeight());
                        touchEvent.pointer = in.readInt();
                        touchEvent.type = TouchEvent.TOUCH_UP;
                        break;
                    case RemoteSender.TOUCH_DRAGGED:
                        touchEvent = new TouchEvent();
                        touchEvent.x = (int) ((in.readInt() / remoteWidth) * Gdx.graphics.getWidth());
                        touchEvent.y = (int) ((in.readInt() / remoteHeight) * Gdx.graphics.getHeight());
                        touchEvent.pointer = in.readInt();
                        touchEvent.type = TouchEvent.TOUCH_DRAGGED;
                        break;
                }
                Gdx.app.postRunnable(new EventTrigger(touchEvent, keyEvent));
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
