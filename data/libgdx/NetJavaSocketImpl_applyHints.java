private void applyHints(SocketHints hints) {
    if (hints != null) {
        try {
            socket.setPerformancePreferences(hints.performancePrefConnectionTime, hints.performancePrefLatency, hints.performancePrefBandwidth);
            socket.setTrafficClass(hints.trafficClass);
            socket.setTcpNoDelay(hints.tcpNoDelay);
            socket.setKeepAlive(hints.keepAlive);
            socket.setSendBufferSize(hints.sendBufferSize);
            socket.setReceiveBufferSize(hints.receiveBufferSize);
            socket.setSoLinger(hints.linger, hints.lingerDuration);
            socket.setSoTimeout(hints.socketTimeout);
        } catch (Exception e) {
            throw new GdxRuntimeException("Error setting socket hints.", e);
        }
    }
}
