@Override
public void create() {
    // setup a server thread where we wait for incoming connections
    // to the server
    new Thread(new Runnable() {

        @Override
        public void run() {
            ServerSocketHints hints = new ServerSocketHints();
            ServerSocket server = Gdx.net.newServerSocket(Protocol.TCP, "localhost", 9999, hints);
            // wait for the next client connection
            Socket client = server.accept(null);
            // read message and send it back
            try {
                String message = new BufferedReader(new InputStreamReader(client.getInputStream())).readLine();
                Gdx.app.log("PingPongSocketExample", "got client message: " + message);
                client.getOutputStream().write("PONG\n".getBytes());
            } catch (IOException e) {
                Gdx.app.log("PingPongSocketExample", "an error occured", e);
            }
        }
    }).start();
    // create the client send a message, then wait for the
    // server to reply
    SocketHints hints = new SocketHints();
    Socket client = Gdx.net.newClientSocket(Protocol.TCP, "localhost", 9999, hints);
    try {
        client.getOutputStream().write("PING\n".getBytes());
        String response = new BufferedReader(new InputStreamReader(client.getInputStream())).readLine();
        Gdx.app.log("PingPongSocketExample", "got server message: " + response);
    } catch (IOException e) {
        Gdx.app.log("PingPongSocketExample", "an error occured", e);
    }
}
